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

class Window
{
    private:
        /// Window name
        const char *m_Window_name = "Rubik Cube";

        bool m_open = true;

        glm::vec2 positions[3] = 
        {
            glm::vec2(0.0, -0.5),
            glm::vec2(0.5, 0.5),
            glm::vec2(-0.5, 0.5),
        };

        glm::vec4 vect4d = glm::vec4(positions[0], 0.0, 1.0);

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

        bool wouldOpen(void);

        ////////////////////////////////////////

        /// Control test
        void pollEvent(void);

        void draw(void);

        void drawRubikCube(std::vector<std::vector<int>> Rubik);
};

#endif