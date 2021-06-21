/**
 * @file Control.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "../../include/Window.h"

void Window::pollEvent()
{
    glfwSwapBuffers(m_Window);
    glfwPollEvents();
}