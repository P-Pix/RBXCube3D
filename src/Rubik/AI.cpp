/**
 * @file AI.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-08-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Rubik.hpp"

void Rubik::analyse(void)
{
    /// create cross
    if(!m_cross)
    {
        for(int i = 0; i < m_RubikCube.size(); i ++)
        {
            for(int j = 1; j < m_RubikCube[i].size(); j += 2)
            {
                if(m_RubikCube[i][j] == WHITE && i != 1)
                {
                    
                }
            }
        }
        if(cross(UP_FACE))
        {
            m_cross = true;
        }
        else
        {
            if(m_crosspatern == 0)
            {
                determineAction(ROTATION_LEFT, FIRST_LINE);
            }
            else if(m_crosspatern == 1)
            {
                determineAction(HORIZONTAL_LEFT, FIRST_LINE);
            }
            else if(m_crosspatern == 2)
            {
                determineAction(VERTICAL_UP, FIRST_COLUMN);
            }
            else
            {
                determineAction(HORIZONTAL_RIGHT, FIRST_LINE);
            }
            m_crosspatern ++;
            m_crosspatern %= 4;
        }
    }

    /// create first crown
    else if(0)
    {

    }

    /// create second crown
    else if(0)
    {

    }

    /// create back cross
    else if(0)
    {

    }

    /// finish
    else if(0)
    {

    }
}