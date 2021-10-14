/**
 * @file Draw.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.hpp"

void Window::draw(void)
{
    allDrawing();
    glfwSwapBuffers(this -> m_Window);
}

void Window::allDrawing(void)
{
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
}

void Window::drawRubikCube(std::vector<std::vector<int>> Rubik)
{
    for(int i = 0; i < Rubik.size(); i ++)
    {
        for(int j = 0; j < Rubik[i].size(); j ++)
        {
            if(Rubik[i][j] == RED)
            {

            }
            else if(Rubik[i][j] == WHITE)
            {

            }
            else if(Rubik[i][j] == BLUE)
            {

            }
            else if(Rubik[i][j] == GREEN)
            {

            }
            else if(Rubik[i][j] == YELLOW)
            {

            }
            else if(Rubik[i][j] == ORANGE)
            {

            }

        }
    }
}