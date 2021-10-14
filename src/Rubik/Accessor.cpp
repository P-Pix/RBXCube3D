/**
 * @file Accessor.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Rubik.hpp"

bool Rubik::isComplet(void)
{
    return RubikIsFinish();
}

bool Rubik::solvingFace(int face)
{
    int color = m_RubikCube[face][4];
    for(int j = 0; j < CASE_PER_FACE; j ++)
    {
        if(m_RubikCube[face][j] != color)
        {
            return false;
        }
    }
    return true;
}

bool Rubik::RubikIsFinish(void)
{
    for(int i = 0; i < FACE_NUMBER; i ++)
    {
        if(!solvingFace(i))
        {
            return false;
        }
    }
    return true;
}

std::vector<std::vector<int>> Rubik::getRubikCube(void)
{
    return m_RubikCube;
}

std::vector<int> Rubik::getAction(void)
{
    return m_action;
}

bool Rubik::cross(int face)
{
    int color = m_RubikCube[face][CASE_CENTRAL];
    for(int i = 1; i < m_RubikCube[face].size(); i += 2)
    {
        if(color != m_RubikCube[face][i])
        {
            return false;
        }
    }
    return true;
}