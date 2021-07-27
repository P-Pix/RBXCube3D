/**
 * @file Surface.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.hpp"

void Window::createSurface(void)
{
    glfwCreateWindowSurface (m_instance, m_Window, nullptr, &m_Surface);
}