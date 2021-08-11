/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Rubik.hpp"
#include "../operator/printRubik.cpp"

Rubik::Rubik(void)
{
    std::srand(std::time(nullptr));
    m_RubikCube.clear();
    createRubik();
    printRubikCube();
    randomShuffle();
    printRubikCube();
    m_action.clear();
}

Rubik::~Rubik(void)
{

}

void Rubik::makeListCase(void)
{
    
}

void Rubik::randomShuffle(void)
{
    int valeur = std::rand() % 1000000;
    for(int i = 0; i < valeur; i ++)
    {
        randomAction();
    }
}

void Rubik::createRubik(void)
{
    std::vector<int> red, blue, yellow, orange, white, green;
    for(unsigned int i = 0; i < CASE_PER_FACE; i ++)
    {
        red.push_back(RED);
        white.push_back(WHITE);
        blue.push_back(BLUE);
        orange.push_back(ORANGE);
        green.push_back(GREEN);
        yellow.push_back(YELLOW);
    }
    m_RubikCube.push_back(red);
    m_RubikCube.push_back(white);
    m_RubikCube.push_back(blue);
    m_RubikCube.push_back(green);
    m_RubikCube.push_back(yellow);
    m_RubikCube.push_back(orange);
}

void Rubik::randomAction(void)
{
    int newval1 = std::rand() % 6;
    int newval2 = std::rand() % NUMBER_LINE;
    selectAction(newval1, newval2);
    m_action.push_back(newval1);
}

void Rubik::printRubikCube(void)
{
    std::cout << m_RubikCube << std::endl;
}