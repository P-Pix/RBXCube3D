/**
 * @file Accessor.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.hpp"

bool Window::isOpen(void)
{
    return !glfwWindowShouldClose(m_window);
}