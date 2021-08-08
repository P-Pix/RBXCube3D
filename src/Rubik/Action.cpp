/**
 * @file Action.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Rubik.hpp"

void Rubik::horizontalLeft(int line)
{
    std::cout << std::endl << "horizontal left axis = " << line << std::endl;
    std::vector<int> cases, facemoving;

    /// make the order of moving face
    facemoving.push_back(FORWARD_FACE);
    facemoving.push_back(LEFT_FACE);
    facemoving.push_back(BACK_FACE);
    facemoving.push_back(RIGHT_FACE);

    /// put moving element in the vector
    if(line == 0)
    {
        clockwiseRotation(UP_FACE);
    }
    else if(line == 2)
    {
        backClockwiseRotation(DOWN_FACE);	    
    }
    cases = selectCasesHorizontal(line);

    /// move all element three times
    rotationLine(facemoving, cases);
}

void Rubik::horizontalRight(int line)
{
    std::cout << std::endl << "horizontal right axis = " << line << std::endl;
    std::vector<int> cases, facemoving;
    facemoving.push_back(FORWARD_FACE);
    facemoving.push_back(RIGHT_FACE);
    facemoving.push_back(BACK_FACE);
    facemoving.push_back(LEFT_FACE);
    if(line == 0)
    {
        backClockwiseRotation(UP_FACE);
    }
    else if(line == 2)
    {
        clockwiseRotation(DOWN_FACE);
    }
    cases = selectCasesHorizontal(line);
    rotationLine(facemoving, cases);    
}

void Rubik::verticalUp(int line)
{
    std::cout << std::endl << "vertical left axis = " << line << std::endl;
    std::vector<int> cases, facemoving;
    facemoving.push_back(FORWARD_FACE);
    facemoving.push_back(UP_FACE);
    facemoving.push_back(BACK_FACE);
    facemoving.push_back(DOWN_FACE);
    if(line == 0)
    {
        backClockwiseRotation(LEFT_FACE);
    }
    else if(line == 2)
    {
        clockwiseRotation(RIGHT_FACE);	    
    }
    cases = selectCasesVertical(line);
    rotationLine(facemoving, cases); 
}

void Rubik::verticalDown(int line)
{
    std::cout << std::endl << "vertical right axis = " << line << std::endl;
    std::vector<int> cases, facemoving;
    facemoving.push_back(FORWARD_FACE);
    facemoving.push_back(DOWN_FACE);
    facemoving.push_back(BACK_FACE);
    facemoving.push_back(UP_FACE);
    if(line == 0)
    {
        clockwiseRotation(LEFT_FACE);
    }
    else if(line == 2)
    {
        backClockwiseRotation(RIGHT_FACE);	    
    }
    cases = selectCasesVertical(line);
    rotationLine(facemoving, cases); 
}

void Rubik::rotationLeft(int line)
{
    std::cout << std::endl << "rotation left axis = " << line << std::endl;
    std::vector<int> cases, facemoving;
    facemoving.push_back(UP_FACE);
    facemoving.push_back(LEFT_FACE);
    facemoving.push_back(DOWN_FACE);
    facemoving.push_back(RIGHT_FACE);
    if(line == 0)
    {
        backClockwiseRotation(FORWARD_FACE);
    }
    else if(line == 2)
    {
        clockwiseRotation(BACK_FACE);	    
    }
    cases = selectCasesVertical(line);
    rotationLine(facemoving, cases); 
}

void Rubik::rotationRight(int line)
{
    std::cout << std::endl << "rotation right axis = " << line << std::endl;
    std::vector<int> cases, facemoving;
    facemoving.push_back(UP_FACE);
    facemoving.push_back(RIGHT_FACE);
    facemoving.push_back(DOWN_FACE);
    facemoving.push_back(LEFT_FACE);
    if(line == 0)
    {
        clockwiseRotation(FORWARD_FACE);
    }
    else if(line == 2)
    {
        backClockwiseRotation(BACK_FACE);	    
    }
    cases = selectCasesVertical(line);
    rotationLine(facemoving, cases); 
}

void Rubik::clockwiseRotation(int face)
{
    std::vector<int> clone = m_RubikCube[face];
    int x = 2, y = 0;
    for(int i = 0; i < CASE_PER_FACE; i ++) 
    {
        // std::cout << (8 - x) - (3 * y) << std::endl;
        m_RubikCube[face][(8 - x) - (3 * y)] = clone[i];
        y ++;
        if(y > 2)
        {
            x --;
            y = 0;
        }
    }
}
void Rubik::backClockwiseRotation(int face)
{
    std::vector<int> clone = m_RubikCube[face];
    int x = 0, y = 2;
    for(int i = 0; i < CASE_PER_FACE; i ++) 
    {
        // std::cout << (8 - x) - (3 * y) << std::endl;
        m_RubikCube[face][(8 - x) - (3 * y)] = clone[i];
        y --;
        if(y < 0)
        {
            x ++;
            y = 2;
        }
    }
}

std::vector<int> Rubik::selectCasesHorizontal(int line)
{
    std::vector<int> cases;
    for(int i = CASE_PER_LINE * line; i < CASE_PER_LINE * (line + 1); i ++)
    {
        cases.push_back(i);
    }
    return cases;
}

std::vector<int> Rubik::selectCasesVertical(int line)
{
    std::vector<int> cases;
    for(int i = line; i < CASE_PER_FACE; i += 3)
    {
        cases.push_back(i);
    }
    return cases;
}

void Rubik::rotationLine(std::vector<int> facemoving, std::vector<int> cases)
{
    std::vector<std::vector<int>> clone = m_RubikCube;
    for(int i = 0; i < facemoving.size(); i ++)
    {
        for(int j = 0; j < cases.size(); j ++)
        {
            m_RubikCube[facemoving[i]][cases[j]] = clone[facemoving[(i + 1) % facemoving.size()]][cases[j]];
            
        }
    }
}

void Rubik::selectAction(int action, int line)
{
    determineAction(action, line);
    m_action.push_back(action);
}

void Rubik::determineAction(int action, int line)
{
    action %= 6;
    line %= 3;
    if(action == 0)
    {
        horizontalLeft(line);
    }
    else if(action == 1)
    {
        horizontalRight(line);
    }
    else if(action == 2)
    {
        verticalDown(line);
    }
    else if(action == 3)
    {
        verticalUp(line);
    }
    else if(action == 4)
    {
        rotationLeft(line);
    }
    else
    {
        rotationRight(line);
    }
}