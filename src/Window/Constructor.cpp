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
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    m_window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, m_window_name, nullptr, nullptr);
}

Window::~Window(void)
{
    glfwDestroyWindow(m_window);
    glfwTerminate();
}