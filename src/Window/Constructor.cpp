/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.h"

Window::Window()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
    //this -> m_Window = nullptr;
    this -> m_Window = glfwCreateWindow(m_windowwidth, m_windowheight, m_windowname, NULL, NULL);

    if(m_Window == NULL)
    {
        std::cout << "Window no create" << std::endl;
    }
    glfwMakeContextCurrent(m_Window);
    glViewport(0, 0, m_windowwidth, m_windowheight);
}
Window::~Window()
{
    glfwTerminate();
}

bool Window::isOpen()
{
    return !glfwWindowShouldClose(m_Window);
}