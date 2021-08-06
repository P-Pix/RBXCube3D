/**
 * @file Accessor.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Rubix.hpp"

bool Rubix::isComplet(void)
{
    return rubixIsFinish();
}

bool Rubix::solvingFace(int face)
{
    int color = m_RubixCube[face][0];
    for(int j = 0; j < CASE_PER_FACE; j ++)
    {
        if(m_RubixCube[face][j] != color)
        {
            return false;
        }
    }
    return true;
}

bool Rubix::rubixIsFinish(void)
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

std::vector<std::vector<int>> Rubix::getRubixCube(void)
{
    return m_RubixCube;
}

std::vector<int> Rubix::getAction(void)
{
    return m_action;
}