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
    m_RubikCube.push_back(Green);
    m_RubikCube.push_back(Yellow);
    m_RubikCube.push_back(Orange);

    std::vector<int> Red, Blue, Yellow, Orange, White, Green;
    Red.push_back(WHITE);
    Red.push_back(GREEN);
    Red.push_back(YELLOW);
    Red.push_back(BLUE);

    Blue.push_back(WHITE);
    Blue.push_back(RED);
    Blue.push_back(YELLOW);
    Blue.push_back(ORANGE);

    Yellow.push_back(RED);
    Yellow.push_back(GREEN);
    Yellow.push_back(ORANGE);
    Yellow.push_back(BLUE);

    Orange.push_back(WHITE);
    Orange.push_back(GREEN);
    Orange.push_back(YELLOW);
    Orange.push_back(BLUE);

    White.push_back(RED);
    White.push_back(GREEN);
    White.push_back(ORANGE);
    White.push_back(BLUE);

    Green.push_back(RED);
    Green.push_back(YELLOW);
    Green.push_back(ORANGE);
    Green.push_back(WHITE);

    m_RotationFace.push_back(Red);
    m_RotationFace.push_back(White);
    m_RotationFace.push_back(Blue);
    m_RotationFace.push_back(Green);
    m_RotationFace.push_back(Yellow);
    m_RotationFace.push_back(Orange);
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