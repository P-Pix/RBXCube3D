/**
 * @file operator<<.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <vector>
#include <iostream>

std::ostream &listXYZ(std::ostream &flux, std::vector<std::vector<float>> vect)
{
    for(int x = 0; x < vect.size(); x ++)
    {
        flux << "-- " << x + 1 << " / " << vect.size() << " --" << std::endl;
        flux << "| x = " << vect[x][0] << " |" << std::endl;
        flux << "| y = " << vect[x][1] << " |" << std::endl;
        flux << "| z = " << vect[x][2] << " |" << std::endl << std::endl;
    }
    return flux;
}
std::ostream &operator<<(std::ostream &flux, std::vector<std::vector<float>> vect)
{
    if(vect[0].size() == 3)
    {
        return listXYZ(flux, vect);
    }
    return flux;
}