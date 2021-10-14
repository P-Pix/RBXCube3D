/**
 * @file Window.hpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _WINDOW_HPP_
#define _WINDOW_HPP_

#include <iostream>
#include <vector>
#include <cstdlib>
#include <optional>

#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#include "freeglut-3.2.1/include/GL/freeglut.h"

#define WINDOW_WIDTH    800
#define WINDOW_HEIGHT   600

#include "Rubik.hpp"

class Window
{
    private:
        /// Window name
        const char *m_WindowName = "Rubik Cube";

        bool m_open = false;

        /*
        GLfloat m_vertices[] =
        {
                -0.5f, -0.5f, 0.0f,
                0.5f, -0.5f, 0.0f,
                0.0f, 0.5f, 0.0f
        };
         */

        /// Window
        GLFWwindow *m_Window;

        /// Drawing function
        void allDrawing(void);

        void close(void);

    protected:

    public:
        /// Default Constructor
        Window(void);

        /// Destructor
        ~Window(void);

        ////////////////////////////////////////

        /// \return true if the window is open
        bool isOpen(void);

        /// \return false if the window wouldn't close
        bool wouldClose(void);

        ////////////////////////////////////////

        /// Control test
        void pollEvent(void);

        void draw(void);

        void drawRubikCube(std::vector<std::vector<int>> Rubik);
};

#endif