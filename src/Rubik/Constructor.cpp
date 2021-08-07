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
    std::cout << m_RubikCube << std::endl;
    randomShuffle();
    std::cout << m_RubikCube << std::endl;
}

Rubik::~Rubik(void)
{

}

void Rubik::randomShuffle(void)
{
    int valeur = std::rand() % 1000000;
    for(int i = 0; i < valeur; i ++)
    {
        randomAction();
    }
    m_action.clear();
}

void Rubik::createRubik(void)
{
    std::vector<int> Red, Blue, Yellow, Orange, White, Green;
    for(unsigned int i = 0; i < CASE_PER_FACE; i ++)
    {
        Red.push_back(RED);
        White.push_back(WHITE);
        Blue.push_back(BLUE);
        Orange.push_back(ORANGE);
        Green.push_back(GREEN);
        Yellow.push_back(YELLOW);
    }
    m_RubikCube.push_back(Red);
    m_RubikCube.push_back(White);
    m_RubikCube.push_back(Blue);
    m_RubikCube.push_back(Orange);
    m_RubikCube.push_back(Green);
    m_RubikCube.push_back(Yellow);
}

void Rubik::randomAction(void)
{
    int newval1 = std::rand() % 6;
    int newval2 = std::rand() % CASE_PER_LINE;
    selectAction(newval1, newval2);
    m_action.push_back(newval1);
}