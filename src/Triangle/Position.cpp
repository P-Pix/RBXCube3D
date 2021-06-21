/**
 * @file Position.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Triangle.h"

///////////////////////////////////////

void Triangle::setAx(float value)
{
    if(value < -1 || value > 1)
    {
        return;
    }
    m_A[0] = value;
    m_point[0][0] = value;
}
void Triangle::setAy(float value)
{
    if(value < -1 || value > 1)
    {
        return;
    }
    m_A[1] = value;
    m_point[0][1] = value;
}
void Triangle::setAz(float value)
{
    if(value < -1 || value > 1)
    {
        return;
    }
    m_A[2] = value;
    m_point[0][2] = value;
}

///////////////////////////////////////

void Triangle::setBx(float value)
{
    if(value < -1 || value > 1)
    {
        return;
    }
    m_B[0] = value;
    m_point[1][0] = value;
}
void Triangle::setBy(float value)
{
    if(value < -1 || value > 1)
    {
        return;
    }
    m_B[1] = value;
    m_point[1][1] = value;
}
void Triangle::setBz(float value)
{
    if(value < -1 || value > 1)
    {
        return;
    }
    m_B[2] = value;
    m_point[1][2] = value;
}

///////////////////////////////////////

void Triangle::setCx(float value)
{
    if(value < -1 || value > 1)
    {
        return;
    }
    m_C[0] = value;
    m_point[2][0] = value;
}
void Triangle::setCy(float value)
{
    if(value < -1 || value > 1)
    {
        return;
    }
    m_C[1] = value;
    m_point[2][1] = value;
}
void Triangle::setCz(float value)
{
    if(value < -1 || value > 1)
    {
        return;
    }
    m_C[2] = value;
    m_point[2][2] = value;
}