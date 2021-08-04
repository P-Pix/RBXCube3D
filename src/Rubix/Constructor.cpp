/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Rubix.hpp"
#include "../operator/printrubix.cpp"

Rubix::Rubix(void)
{
    std::srand(std::time(nullptr));
    m_RubixCube.clear();
    createRubix();
    randomShuffle();
    std::cout << m_RubixCube << std::endl;
}
Rubix::~Rubix(void)
{

}

void Rubix::randomShuffle(void)
{
    int valeur = std::rand() % 10000000;
    for(int i = 0; i < valeur; i ++)
    {
        int newval1 = std::rand() % 6;
        int newval2 = std::rand() % CASE_PER_LINE;
        if(newval1 == 0)
        {
            horizontalLeft(newval2);
        }
        else if(newval1 == 1)
        {
            horizontalRight(newval2);
        }
        else if(newval1 == 2)
        {
            verticalDown(newval2);
        }
        else if(newval1 == 3)
        {
            verticalUp(newval2);
        }
        else if(newval1 == 4)
        {
            rotationLeft(newval2);
        }
        else
        {
            rotationRight(newval2);
        }
    }
}

void Rubix::createRubix(void)
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
    m_RubixCube.push_back(Red);
    m_RubixCube.push_back(White);
    m_RubixCube.push_back(Blue);
    m_RubixCube.push_back(Orange);
    m_RubixCube.push_back(Green);
    m_RubixCube.push_back(Yellow);
}