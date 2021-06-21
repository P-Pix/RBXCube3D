/**
 * @file Accessor.cpp
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

std::vector<float> Triangle::getListA()
{
    return m_A;
}
std::vector<float> Triangle::getListB()
{
    return m_B;
}
std::vector<float> Triangle::getListC()
{
    return m_C;
}

///////////////////////////////////////

std::vector<std::vector<float>> Triangle::getListPoint()
{
    return m_point;
}