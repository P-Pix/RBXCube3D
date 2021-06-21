/**
 * @file Draw.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.h"

///////////////////////////////////////

float Window::eightBitColor(float value)
{
    return value / 255;
}

///////////////////////////////////////

void Window::draw()
{
    glClearColor(eightBitColor(88), eightBitColor(163), eightBitColor(83), eightBitColor(255));
    //glClear(GL_DEPTH_BUFFER_BIT);
    glClear(GL_COLOR_BUFFER_BIT);
}
