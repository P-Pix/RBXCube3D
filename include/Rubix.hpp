/**
 * @file Rubix.hpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-27
 * 
 * @brief Rubix header with his construction and his action
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _RUBIX_HPP_
#define _RUBIX_HPP_

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#define RED     0
#define WHITE   1
#define BLUE    2
#define ORANGE  3
#define GREEN   4
#define YELLOW  5

#define CASE_PER_LINE           3
#define FACE_NUMBER             6
#define CASE_PER_FACE           9
#define FACE_MOVING_PER_ACTION  4

#define CENTRAL_FACE    0
#define UP_FACE         1
#define LEFT_FACE       2
#define RIGHT_FACE      3
#define DOWN_FACE       4
#define BACK_FACE       5

/**
***     1
*** 2   0   3
***     4
***     5
***
*** action refert by 0
**/
class Rubix
{
    private:

        /// Rubix cube representation
        std::vector<std::vector<int>> m_RubixCube;

        /// Create the rubix cube
        void createRubix(void);

        /// Test if the Rubix cube is finish
        bool rubixIsFinish(void);

        /// Rubix cube random shuffle
        void randomShuffle(void);

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

    public:

        /// Default Constructor
        Rubix(void);

        /// Default destructor
        ~Rubix(void);

        /// \return true if rubix cube is finish, else if not
        bool isComplet(void);

        /// Select a action
        void selectAction(void);
};

#endif