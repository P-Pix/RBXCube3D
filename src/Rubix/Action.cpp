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
    std::cout << std::endl << "horizontal left axis = " << line << std::endl;
    std::vector<int> cases, facemoving;

    /// make the order of moving face
    facemoving.push_back(RED);
    facemoving.push_back(BLUE);
    facemoving.push_back(YELLOW);
    facemoving.push_back(ORANGE);

    /// put moving element in the vector
    if(line == 0)
    {
        rotationAfterLeftAction(UP_FACE);
    }
    else if(line == 2)
    {
        rotationAfterLeftAction(BACK_FACE);	    
    }
    cases = selectCases(line);

    /// move all element three times
    for(int repetiton = 0; repetiton < 3; repetiton ++)
    {
        std::vector<std::vector<int>> clone = m_RubixCube;
        for(int i = 0; i < facemoving.size(); i ++)
        {
            for(int j = 0; j < cases.size(); j ++)
            {
                if(j + 1 == CASE_PER_LINE && i + 1 != facemoving.size())
                {
                    m_RubixCube[facemoving[i]][cases[j]] = clone[facemoving[i + 1]][cases[0]];
                }
                else if(i + 1 == facemoving.size() && j + 1 == CASE_PER_LINE)
                {
                    m_RubixCube[facemoving[i]][cases[j]] = clone[facemoving[0]][cases[0]];
                }
                else
                {
                    m_RubixCube[facemoving[i]][cases[j]] = clone[facemoving[i]][cases[j + 1]];
                }
            }
        }
    }
}

void Rubix::horizontalRight(int line)
{
    std::cout << std::endl << "horizontal right axis = " << line << std::endl;
    std::vector<int> cases, facemoving;
    facemoving.push_back(RED);
    facemoving.push_back(ORANGE);
    facemoving.push_back(YELLOW);
    facemoving.push_back(BLUE);
    if(line == 0)
    {
        rotationAfterRightAction(UP_FACE);
    }
    else if(line == 2)
    {
        rotationAfterRightAction(BACK_FACE);
    }
    cases = selectCases(line);
    for(int repetition = 0; repetition < 3; repetition ++)
    {
        std::vector<std::vector<int>> clone = m_RubixCube;
        for(int i = facemoving.size() - 1; i >= 0; i --)
        {
            for(int j = CASE_PER_LINE - 1; j >= 0; j --)
            {
                if(j - 1 < 0 && i - 1 >= 0)
                {
                    m_RubixCube[facemoving[i]][cases[j]] = clone[facemoving[i - 1]][cases[cases.size() - 1]];
                }
                else if(i - 1 < 0 && j - 1 < 0)
                {
                    m_RubixCube[0][cases[0]] = clone[facemoving[facemoving.size() - 1]][cases[cases.size() - 1]];
                }
                else
                {
                    m_RubixCube[facemoving[i]][cases[j]] = clone[facemoving[i]][cases[j - 1]];
                }
            }
        }
    }
}

void Rubix::verticalUp(int line)
{
    std::cout << std::endl << "vertical left axis = " << line << std::endl;
}

void Rubix::verticalDown(int line)
{
    std::cout << std::endl << "vertical right axis = " << line << std::endl;
}

void Rubix::rotationLeft(int line)
{
    std::cout << std::endl << "rotation left axis = " << line << std::endl;
}

void Rubix::rotationRight(int line)
{
    std::cout << std::endl << "rotation right axis = " << line << std::endl;
}

void Rubix::rotationAfterLeftAction(int face)
{
    std::vector<int> clone = m_RubixCube[face];
    int x = 2, y = 0;
    for(int i = 0; i < CASE_PER_FACE; i ++) 
    {
        std::cout << (8 - x) - (3 * y) << std::endl;
        m_RubixCube[face][(8 - x) - (3 * y)] = clone[i];
        y ++;
        if(y > 2)
        {
            x --;
            y = 0;
        }
    }
}
void Rubix::rotationAfterRightAction(int face)
{
    std::vector<int> clone = m_RubixCube[face];
    int x = 0, y = 2;
    for(int i = 0; i < CASE_PER_FACE; i ++) 
    {
        std::cout << (8 - x) - (3 * y) << std::endl;
        m_RubixCube[face][(8 - x) - (3 * y)] = clone[i];
        y --;
        if(y < 0)
        {
            x ++;
            y = 2;
        }
    }
}

std::vector<int> Rubix::selectCases(int line)
{
    std::vector<int> cases;
    for(int i = CASE_PER_LINE * line; i < CASE_PER_LINE * (line + 1); i ++)
    {
        cases.push_back(i);
    }
    return cases;
}