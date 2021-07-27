/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Rubix.hpp"

Rubix::Rubix(void)
{
    std::srand(std::time(nullptr));
    m_RubixCube.clear();
    createRubix();
    randomShuffle();
}
Rubix::~Rubix(void)
{

}

void Rubix::randomShuffle(void)
{
    int valeur = std::rand() % 10000000;
    for(int i = 0; i < valeur; i ++)
    {
        int newval1 = std::rand();
        int newval2 = std::rand();
        if(newval1 % 4 == 0)
        {
            horizontalLeft(newval2 % CASE_PER_LINE);
        }
        else if(newval1 % 4 == 1)
        {
            horizontalRight(newval2 % CASE_PER_LINE);
        }
        else if(newval1 % 4 == 2)
        {
            verticalRight(newval2 % CASE_PER_LINE);
        }
        else
        {
            verticalLeft(newval2 % CASE_PER_LINE);
        }
    }
}

void Rubix::createRubix(void)
{
    std::vector<int> Red, Blue, Yellow, Orange, White, Green;
    for(unsigned int i = 0; i < CASE_PER_FACE; i ++)
    {
        Red.push_back(RED);
        Blue.push_back(BLUE);
        Yellow.push_back(YELLOW);
        Orange.push_back(ORANGE);
        White.push_back(WHITE);
        Green.push_back(GREEN);
    }
    m_RubixCube.push_back(Red);
    m_RubixCube.push_back(Blue);
    m_RubixCube.push_back(Yellow);
    m_RubixCube.push_back(Orange);
    m_RubixCube.push_back(White);
    m_RubixCube.push_back(Green);
}