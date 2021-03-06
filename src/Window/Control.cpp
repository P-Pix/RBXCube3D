/**
 * @file Control.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.hpp"

void Window::pollEvent(void)
{
    glfwPollEvents();
    if(glfwGetKey(m_Window, GLFW_KEY_ESCAPE))
    {
        m_open = true;
        close();
    }
}