/**
 * @file printRubik.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <vector>

#include "../../include/Rubik.hpp"

#ifndef _PRINT_Rubik_
#define _PRINT_Rubik_

std::ostream &operator<<(std::ostream &flux, std::vector<int> line)
{
    for(int i = 0; i < (CASE_PER_FACE / CASE_PER_LINE); i ++)
    {
        flux << "| ";
        for(int j = 0; j < CASE_PER_LINE; j ++)
        {
            if(line[i * 3 + j] == 0)
            {
                flux << "r ";
            }
            else if(line[i * 3 + j] == 1)
            {
                flux << "w ";
            }
            else if(line[i * 3 + j] == 2)
            {
                flux << "b ";
            }
            else if(line[i * 3 + j] == 3)
            {
                flux << "g ";
            }
            else if(line[i * 3 + j] == 4)
            {
                flux << "y ";
            }
            else if(line[i * 3 + j] == 5)
            {
                flux << "o ";
            }
        }
        flux << "|" << std::endl;
    }
    return flux;
}
std::ostream &operator<<(std::ostream &flux, std::vector<std::vector<int>> Rubik)
{
    for(int i = 0; i < Rubik.size(); i ++)
    {
        flux << "########## \e[1m" << i + 1 << " / " << Rubik.size() << " \e[0m#########" << std::endl << std::endl;
        flux << Rubik[i] << std::endl;
    }
    return flux;
}

#endif