/**
 * @file Accessor.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.h"

bool Window::isOpen()
{
    return !glfwWindowShouldClose(m_Window);
}
std::vector<std::vector<float>> Window::getTrianglePoint()
{
    return m_triangle.getListPoint();
}