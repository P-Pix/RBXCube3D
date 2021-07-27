/**
 * @file Accessor.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Rubix.hpp"

bool Rubix::isComplet(void)
{
    return rubixIsFinish();
}

bool Rubix::rubixIsFinish(void)
{
    for(int i = 0; i < FACE_NUMBER; i ++)
    {
        int color = m_RubixCube[i][0];
        for(int j = 0; j < CASE_PER_FACE; j ++)
        {
            if(m_RubixCube[i][j] != color)
            {
                return false;
            }
        }
    }
    return true;
}