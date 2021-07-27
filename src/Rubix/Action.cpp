/**
 * @file Action.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Rubix.hpp"

void Rubix::horizontalLeft(int line)
{
    std::vector<int> cases;
    line %= CASE_PER_LINE;
    if(line == 0)
    {
        for(int i = 0; i < CASE_PER_LINE; i ++)
        {
            cases.push_back(i);
        }
    }
    else if(line == 1)
    {
        for(int i = CASE_PER_LINE; i < CASE_PER_LINE * 2; i ++)
        {
            cases.push_back(i);
        }
    }
    else if(line == 2)
    {
        for(int i = CASE_PER_LINE * 2; i < CASE_PER_LINE * 3; i ++)
        {
            cases.push_back(i);
        }
    }
    int case0 = m_RubixCube[0][cases[0]];
    //std::cout << "horizontal left" << std::endl;
    for(int i = 0; i < FACE_NUMBER; i ++)
    {
        for(int j = 0; j < CASE_PER_LINE; j ++)
        {
            if(j + 1 == CASE_PER_LINE && i + 1 != FACE_NUMBER)
            {
                m_RubixCube[i][j] = m_RubixCube[i + 1][cases[0]];
            }
            else if(i + 1 == FACE_NUMBER && j + 1 == CASE_PER_LINE)
            {
                m_RubixCube[i][j] = case0;
            }
            else
            {
                m_RubixCube[i][j] = m_RubixCube[i][cases[j + 1]];
            }
        }
    }
}

void Rubix::horizontalRight(int line)
{
    //std::cout << "horizontal right" << std::endl;
}

void Rubix::verticalLeft(int line)
{
    //std::cout << "vertical left" << std::endl;
}

void Rubix::verticalRight(int line)
{
    //std::cout << "vertical right" << std::endl;
}