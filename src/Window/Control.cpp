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
    keyboardEvent();

    glfwSwapBuffers(m_Window);
    glfwPollEvents();
}
void Window::keyboardEvent()
{
    if(glfwGetKey(m_Window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
        glfwSetWindowShouldClose(m_Window, true);
    }
    else if(glfwGetKey(m_Window, GLFW_KEY_LEFT))
    {
        std::cout << "left arrow" << std::endl;
    }
    else if(glfwGetKey(m_Window, GLFW_KEY_RIGHT))
    {
        std::cout << "right arrow" << std::endl;
    }
    else if(glfwGetKey(m_Window, GLFW_KEY_UP))
    {
        std::cout << "up arrow" << std::endl;
    }
    else if(glfwGetKey(m_Window, GLFW_KEY_DOWN))
    {
        std::cout << "down arrow" << std::endl;
    }
}