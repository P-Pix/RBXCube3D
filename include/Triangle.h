/**
 * @file Triangle.h
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include <iostream>
#include <vector>

class Triangle
{
    private:

        ////////////////////////////////////////

        /// point A value
        std::vector<float> m_A;

        /// point b value
        std::vector<float> m_B;

        /// point C value
        std::vector<float> m_C;

        /// point list
        std::vector<std::vector<float>> m_point;

        ////////////////////////////////////////

        /// initialize point vector
        void init(void);

    protected:

    public:
        ////////////////////////////////////////

        /// Default constructor
        Triangle(void);

        /// Constructor with all triangle point
        /// \param point point list
        Triangle(std::vector<std::vector<float>> point);

        /// Destructor
        ~Triangle(void);

        ////////////////////////////////////////

        /// \return position point A
        std::vector<float> getListA(void);

        /// \return position point B
        std::vector<float> getListB(void);

        /// \return position point C
        std::vector<float> getListC(void);

        /// \return position point Triangle
        std::vector<std::vector<float>> getListPoint(void);

        ////////////////////////////////////////

        /// Attribut PointA x value
        /// \param value coord PointA x : [-1, 1]
        void setAx(float value);

        /// Attribut PointA y value
        /// \param value coord PointA y : [-1, 1]
        void setAy(float value);

        /// Attribut PointA z value
        /// \param value coord PointA z : [-1, 1]
        void setAz(float value);

        ////////////////////////////////////////

        /// Attribut PointB x value
        /// \param value coord PointB x : [-1, 1]
        void setBx(float value);

        /// Attribut PointB y value
        /// \param value coord PointB y : [-1, 1]
        void setBy(float value);

        /// Attribut PointB z value
        /// \param value coord PointB z : [-1, 1]
        void setBz(float value);
        
        ////////////////////////////////////////

        /// Attribut PointC x value
        /// \param value coord PointC x : [-1, 1]
        void setCx(float value);

        /// Attribut PointC y value
        /// \param value coord PointC y : [-1, 1]
        void setCy(float value);

        /// Attribut PointC z value
        /// \param value coord PointC z : [-1, 1]
        void setCz(float value);
};

#endif