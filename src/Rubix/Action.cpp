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
    //std::cout << "horizontal left" << std::endl;
    std::vector<int> cases;
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
    for(int i = 0; i < FACE_NUMBER; i ++)
    {
        for(int j = 0; j < CASE_PER_LINE; j ++)
        {
            if(j + 1 == CASE_PER_LINE && i + 1 != FACE_NUMBER)
            {
                m_RubixCube[i][cases[j]] = m_RubixCube[i + 1][cases[0]];
            }
            else if(i + 1 == FACE_NUMBER && j + 1 == CASE_PER_LINE)
            {
                m_RubixCube[i][cases[j]] = case0;
            }
            else
            {
                m_RubixCube[i][cases[j]] = m_RubixCube[i][cases[j + 1]];
            }
        }
    }
}

void Rubix::horizontalRight(int line)
{
    /*
    //std::cout << "horizontal right" << std::endl;
    std::vector<int> cases;
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
    int case0 = m_RubixCube[FACE_NUMBER - 1][cases[cases.size() - 1]];
    for(int i = FACE_NUMBER - 1; i >= 0; i --)
    {
        for(int j = CASE_PER_LINE - 1; j >= 0; j --)
        {
            if(j - 1 < 0 && i - 1 >= 0)
            {
                m_RubixCube[i][cases[j]] = m_RubixCube[i - 1][cases[cases.size() - 1]];
            }
            else if(i - 1 < 0 && j - 1 < 0)
            {
                m_RubixCube[0][cases[0]] = case0;
            }
            else
            {
                m_RubixCube[i][cases[j]] = m_RubixCube[i][cases[j - 1]];
            }
        }
    }
    */
}

void Rubix::verticalUp(int line)
{
    /*
    //std::cout << "vertical left" << std::endl;
    std::vector<int> cases;
    for(int i = 0; i < CASE_PER_LINE; i ++)
    {
        cases.push_back(CASE_PER_LINE * i + line);
    }
    int case0 = m_RubixCube[0][cases[cases.size() - 1]];
    for(int i = FACE_NUMBER - 1; i >= 0; i --)
    {
        for(int j = CASE_PER_LINE - 1; j >= 0; j --)
        {
            if(j - 1 < 0 && i - 1 >= 0)
            {
                m_RubixCube[i][cases[j]] = m_RubixCube[i - 1][cases[cases.size() - 1]];
            }
            else if(i - 1 < 0 && j - 1 < 0)
            {
                m_RubixCube[0][cases[0]] = case0;
            }
            else
            {
                m_RubixCube[i][cases[j]] = m_RubixCube[i][cases[j - 1]];
            }
        }
    }
    */
}

void Rubix::verticalDown(int line)
{
    /*
    //std::cout << "vertical right" << std::endl;
    std::vector<int> cases;
    for(int i = 0; i < CASE_PER_LINE; i ++)
    {
        cases.push_back(CASE_PER_LINE * i + line);
    }
    int case0 = m_RubixCube[0][cases[cases[0]]];
    for(int i = FACE_NUMBER - 1; i >= 0; i --)
    {
        for(int j = CASE_PER_LINE - 1; j >= 0; j --)
        {
            if(j - 1 < 0 && i - 1 >= 0)
            {
                m_RubixCube[i][cases[j]] = m_RubixCube[i - 1][cases[cases.size() - 1]];
            }
            else if(i - 1 < 0 && j - 1 < 0)
            {
                m_RubixCube[0][cases[0]] = case0;
            }
            else
            {
                m_RubixCube[i][cases[j]] = m_RubixCube[i][cases[j - 1]];
            }
        }
    }
    */
}