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
    std::vector<int> cases, facemoving;
    facemoving.push_back(RED);
    facemoving.push_back(BLUE);
    facemoving.push_back(YELLOW);
    facemoving.push_back(ORANGE);
    if(line == 0)
    {
        for(int i = 0; i < CASE_PER_LINE; i ++)
        {
            cases.push_back(i);
        }
        // turn face 1
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
        // turn face 4
    }
    int case0 = m_RubixCube[0][cases[0]];
    for(int i = 0; i < facemoving.size(); i ++)
    {
        for(int j = 0; j < CASE_PER_LINE; j ++)
        {
            if(j + 1 == CASE_PER_LINE && i + 1 != facemoving.size())
            {
                m_RubixCube[facemoving[i]][cases[j]] = m_RubixCube[facemoving[i + 1]][cases[0]];
            }
            else if(i + 1 == facemoving.size() && j + 1 == CASE_PER_LINE)
            {
                m_RubixCube[facemoving[i]][cases[j]] = case0;
            }
            else
            {
                m_RubixCube[facemoving[i]][cases[j]] = m_RubixCube[facemoving[i]][cases[j + 1]];
            }
        }
    }
}

void Rubix::horizontalRight(int line)
{
    //std::cout << "horizontal right" << std::endl;
    std::vector<int> cases, facemoving;
    facemoving.push_back(RED);
    facemoving.push_back(ORANGE);
    facemoving.push_back(YELLOW);
    facemoving.push_back(BLUE);
    if(line == 0)
    {
        for(int i = 0; i < CASE_PER_LINE; i ++)
        {
            cases.push_back(i);
        }
        // turn 1
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
        // turn 4
    }
    int case0 = m_RubixCube[facemoving[facemoving.size() - 1]][cases[cases.size() - 1]];
    for(int i = facemoving.size() - 1; i >= 0; i --)
    {
        for(int j = CASE_PER_LINE - 1; j >= 0; j --)
        {
            if(j - 1 < 0 && i - 1 >= 0)
            {
                m_RubixCube[facemoving[i]][cases[j]] = m_RubixCube[facemoving[i - 1]][cases[cases.size() - 1]];
            }
            else if(i - 1 < 0 && j - 1 < 0)
            {
                m_RubixCube[0][cases[0]] = case0;
            }
            else
            {
                m_RubixCube[facemoving[i]][cases[j]] = m_RubixCube[facemoving[i]][cases[j - 1]];
            }
        }
    }
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

void Rubix::rotationLeft(int line)
{
    //std::cout << "rotation left" << std::endl;
}

void Rubix::rotationRight(int line)
{
    //std::cout << "rotation right" << std::endl;
}