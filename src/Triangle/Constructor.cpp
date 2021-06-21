/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Triangle.h"

Triangle::Triangle()
{
    init();
}
Triangle::Triangle(std::vector<std::vector<float>> point)
{
    init();
    setAx(point[0][0]);
    setAy(point[0][1]);
    setAz(point[0][2]);

    setBx(point[1][0]);
    setBy(point[1][1]);
    setBz(point[1][2]);

    setCx(point[2][0]);
    setCy(point[2][1]);
    setCz(point[2][2]);
}
Triangle::~Triangle()
{

}

void Triangle::init()
{
    float value = 0;
    for(int x = 0; x < 3; x ++)
    {
        m_A.push_back(value);
        m_B.push_back(value);
        m_C.push_back(value);
    }
    m_point.push_back(m_A);
    m_point.push_back(m_B);
    m_point.push_back(m_C);
}