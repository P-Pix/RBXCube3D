/**
 * @file printrubix.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <vector>

#include "../../include/Rubix.hpp"

#ifndef _PRINT_RUBIX_
#define _PRINT_RUBIX_

std::ostream &operator<<(std::ostream &flux, std::vector<int> line)
{
    for(int i = 0; i < CASE_PER_LINE; i ++)
    {
        flux << "| ";
        for(int j = 0; j < CASE_PER_LINE; j ++)
        {
            flux << line[i * 3 + j] << " ";
        }
        flux << "|" << std::endl;
    }
    return flux;
}
std::ostream &operator<<(std::ostream &flux, std::vector<std::vector<int>> rubix)
{
    for(int i = 0; i < rubix.size(); i ++)
    {
        flux << "########## \e[1m" << i + 1 << " / " << rubix.size() << " \e[0m#########" << std::endl << std::endl;
        flux << rubix[i] << std::endl;
    }
    return flux;
}

#endif