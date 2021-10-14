/**
 * @file Rubik.hpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-27
 * 
 * @brief Rubik header with his construction and his action
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _Rubik_HPP_
#define _Rubik_HPP_

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#define CASE_PER_LINE           3
#define FACE_NUMBER             6
#define CASE_PER_FACE           9
#define FACE_MOVING_PER_ACTION  4
#define CASE_CENTRAL            4
#define NUMBER_LINE             3

#define FIRST_LINE      0
#define SECOND_LINE     1
#define THIRD_LINE      2
#define FIRST_COLUMN    0
#define SECOND_COLUMN   1
#define THIRD_COLUMN    2

#define FORWARD_FACE    0
#define UP_FACE         1
#define LEFT_FACE       2
#define RIGHT_FACE      3
#define DOWN_FACE       4
#define BACK_FACE       5

#define HORIZONTAL_LEFT     0
#define HORIZONTAL_RIGHT    1
#define VERTICAL_DOWN       2
#define VERTICAL_UP         3
#define ROTATION_LEFT       4
#define ROTATION_RIGHT      5

#define FACE_SOLVED     1
#define FACE_UNSOLVED   0

#define RED     0
#define WHITE   1
#define BLUE    2
#define GREEN   3
#define YELLOW  4
#define ORANGE  5

/**
***     1
*** 2   0   3
***     4
***     5
***
*** action refert by 0
**/
class Rubik
{
    private:
        bool m_cross    = false;

        int m_crosspatern   = 0;

        const std::vector<int>  m_RedLeft = 
                                {
                                    WHITE,
                                    BLUE,
                                    YELLOW,
                                    GREEN
                                },
                                m_RedRight =
                                {
                                    WHITE,
                                    GREEN,
                                    YELLOW,
                                    BLUE
                                },
                                m_WhiteLeft = 
                                {
                                    RED,
                                    GREEN,
                                    ORANGE,
                                    BLUE
                                },
                                m_WhiteRight = 
                                {
                                    RED,
                                    BLUE,
                                    ORANGE,
                                    GREEN
                                },
                                m_BlueLeft = 
                                {
                                    RED,
                                    WHITE,
                                    ORANGE,
                                    YELLOW
                                },
                                m_BlueRight = 
                                {
                                    RED,
                                    YELLOW,
                                    ORANGE,
                                    WHITE
                                },
                                m_GreenLeft = 
                                {
                                    RED,
                                    YELLOW,
                                    ORANGE,
                                    WHITE
                                },
                                m_GreenRight = 
                                {
                                    RED,
                                    WHITE,
                                    ORANGE,
                                    YELLOW
                                },
                                m_YellowLeft = 
                                {
                                    RED,
                                    BLUE,
                                    ORANGE,
                                    GREEN
                                },
                                m_YellowRight = 
                                {
                                    RED,
                                    GREEN,
                                    ORANGE,
                                    BLUE
                                },
                                m_OrangeLeft = 
                                {
                                    WHITE,
                                    GREEN,
                                    YELLOW,
                                    BLUE
                                },
                                m_OrangeRight = 
                                {
                                    WHITE,
                                    BLUE,
                                    YELLOW,
                                    GREEN
                                };
        
        std::vector<int>    m_RedCase,
                            m_WhiteCase,
                            m_BlueCase,
                            m_GreenCase,
                            m_YellowCase,
                            m_OrangeCase;
        
        std::vector<std::vector<int>> m_ListCase;

        const std::vector<std::vector<int>> m_RotationLeft = 
                                            {
                                                m_RedLeft,
                                                m_WhiteLeft,
                                                m_BlueLeft,
                                                m_GreenLeft,
                                                m_YellowLeft,
                                                m_OrangeLeft,
                                            },
                                            m_RotationRight = 
                                            {
                                                m_RedRight,
                                                m_WhiteRight,
                                                m_BlueRight,
                                                m_GreenRight,
                                                m_YellowRight,
                                                m_OrangeRight,
                                            };

        /// Rubik cube representation
        std::vector<std::vector<int>> m_RubikCube;

        std::vector<int> m_action;

        /// Create the Rubik cube
        void createRubik(void);

        /// Test if the Rubik cube is finish
        bool RubikIsFinish(void);

        /// rotation left on axe y
        /// \param line the line who will moove
        void horizontalLeft(int line);

        /// rotation right on axe y
        /// \param line the line who will moove
        void horizontalRight(int line);

        /// rotation down one axe x
        /// \param line the line who will moove
        void verticalDown(int line);

        /// rotation up on axe x
        /// \param line the line who will moove
        void verticalUp(int line);

        /// rotation right one axe z
        /// \param line the line who will moove
        void rotationRight(int line);

        /// rotation left on axe z
        /// \param line the line who will moove
        void rotationLeft(int line);

        void rotationBackClockwise(int face);

        void rotationClockwise(int face);

        /**
         * 0 1 2
         * 3 4 5
         * 6 7 8
         * 
         * x = 2 to 0
         * y = 0 to 2
         * j = (8 - x) - (3 * y)
         * 
         * 6 = 8
         * 3 = 7
         * 0 = 6
         * 7 = 5
         * 4 = 4
         * 1 = 3
         * 8 = 2
         * 5 = 1
         * 2 = 0
         */
        void clockwiseRotation(int face);

        /**
         * 0 1 2
         * 3 4 5
         * 6 7 8
         * 
         * x = 0 to 2
         * y = 2 to 0
         * j = (8 - x) - (3 * y)
         * 
         * 2 = 8
         * 5 = 7
         * 8 = 6
         * 1 = 5
         * 4 = 4
         * 7 = 3
         * 0 = 2
         * 3 = 1
         * 6 = 0
         */
        void backClockwiseRotation(int face);

        std::vector<int> selectCasesHorizontal(int line);

        std::vector<int> selectCasesVertical(int line);

        void rotationLine(std::vector<int> facemoving, std::vector<int> cases);

        void backRotationLine(std::vector<int> facemoving, std::vector<int> cases);

        bool cross(int face);

        void makeListCase(void);

    public:

        /// Default Constructor
        Rubik(void);

        /// Default destructor
        ~Rubik(void);

        /// \return true if Rubik cube is finish, else if not
        bool isComplet(void);

        /// determine the action
        /// \param action action's number wanted (value = [0, 5])
        /// \param line line's value (value = [0, 2])
        void determineAction(int action, int line);

        std::vector<std::vector<int>> getRubikCube(void);

        std::vector<int> getAction(void);

        /// select a random action
        void randomAction(void);

        /// Select a action
        /// \param action ation's number wanted (value = [0, 5])
        /// \param line line's value (value = [0, 2])
        void selectAction(int action, int line);

        /// Analyse Rubik cube for select the good action
        void analyse(void);

        bool solvingFace(int face);

        void printRubikCube(void);

        /// Rubik cube random shuffle
        void randomShuffle(void);

};

#endif