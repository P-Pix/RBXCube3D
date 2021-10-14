/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.hpp"

Window::Window(void)
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);    
    this -> m_Window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, m_WindowName, nullptr, nullptr);
    glfwMakeContextCurrent(m_Window);
}

Window::~Window(void)
{
    close();
}

void Window::close(void)
{
    glfwDestroyWindow(m_Window);
    glfwTerminate();
}