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
        clockwiseRotation(UP_FACE);
    }
    else if(line == 2)
    {
        backClockwiseRotation(DOWN_FACE);	    
    }
    cases = selectCases(line);

    /// move all element three times
    rotationLine(facemoving, cases);
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
        backClockwiseRotation(UP_FACE);
    }
    else if(line == 2)
    {
        clockwiseRotation(DOWN_FACE);
    }
    cases = selectCases(line);
    rotationLine(facemoving, cases);    
}

void Rubix::verticalUp(int line)
{
    std::cout << std::endl << "vertical left axis = " << line << std::endl;
    std::vector<int> cases, facemoving;
    facemoving.push_back(RED);
    facemoving.push_back(WHITE);
    facemoving.push_back(YELLOW);
    facemoving.push_back(GREEN);
    if(line == 0)
    {
        backClockwiseRotation(LEFT_FACE);
    }
    else if(line == 2)
    {
        clockwiseRotation(RIGHT_FACE);	    
    }
}

void Rubix::verticalDown(int line)
{
    std::cout << std::endl << "vertical right axis = " << line << std::endl;
    std::vector<int> cases, facemoving;
    facemoving.push_back(RED);
    facemoving.push_back(GREEN);
    facemoving.push_back(YELLOW);
    facemoving.push_back(WHITE);
    if(line == 0)
    {
        clockwiseRotation(LEFT_FACE);
    }
    else if(line == 2)
    {
        backClockwiseRotation(RIGHT_FACE);	    
    }    
}

void Rubix::rotationLeft(int line)
{
    std::cout << std::endl << "rotation left axis = " << line << std::endl;
    std::vector<int> cases, facemoving;
    facemoving.push_back(WHITE);
    facemoving.push_back(BLUE);
    facemoving.push_back(GREEN);
    facemoving.push_back(ORANGE);
    if(line == 0)
    {
        backClockwiseRotation(CENTRAL_FACE);
    }
    else if(line == 2)
    {
        clockwiseRotation(BACK_FACE);	    
    }
}

void Rubix::rotationRight(int line)
{
    std::cout << std::endl << "rotation right axis = " << line << std::endl;
    std::vector<int> cases, facemoving;
    facemoving.push_back(WHITE);
    facemoving.push_back(ORANGE);
    facemoving.push_back(GREEN);
    facemoving.push_back(BLUE);
    if(line == 0)
    {
        clockwiseRotation(CENTRAL_FACE);
    }
    else if(line == 2)
    {
        backClockwiseRotation(BACK_FACE);	    
    }
}

void Rubix::clockwiseRotation(int face)
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
void Rubix::backClockwiseRotation(int face)
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

void Rubix::rotationLine(std::vector<int> facemoving, std::vector<int> cases)
{
    std::vector<std::vector<int>> clone = m_RubixCube;
    for(int i = 0; i < facemoving.size(); i ++)
    {
        for(int j = 0; j < cases.size(); j ++)
        {
            m_RubixCube[facemoving[i]][cases[j]] = clone[facemoving[(i + 1) % facemoving.size()]][cases[j]];
            
        }
    }
}