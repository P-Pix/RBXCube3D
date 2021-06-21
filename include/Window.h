/**
 * @file Window.h
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _WINDOW_H_
#define _WINDOW_H_

#include <iostream>

#include <GL/gl.h>
#include <GLFW/glfw3.h>

#include "Triangle.h"

class Window
{
    private:
        ////////////////////////////////////////

        /// Window width
        unsigned int m_windowwidth = 800;

        /// Window height
        unsigned int m_windowheight = 600;

        /// Window name
        const char *m_windowname = "Window";
        ////////////////////////////////////////

        /// GL Window 
        GLFWwindow *m_Window;

        Triangle m_triangle;

        ////////////////////////////////////////

        /// Keyboard Control
        void keyboardEvent(void);

        /// Transform 8bit color value in [0, 1] value
        /// \param value 8bit color value
        /// \return [0, 1] value
        float eightBitColor(float value);


    protected:

    public:
        ////////////////////////////////////////

        /// Default constructor
        Window(void);

        /// Destructor
        ~Window(void);

        ////////////////////////////////////////

        /// \return True if window is open, false if not
        bool isOpen(void);

        /// \return point vector
        std::vector<std::vector<float>> getTrianglePoint(void);

        ////////////////////////////////////////

        /// Constrol checking
        void pollEvent(void);

        /// Limite fps number
        void limitFramerate(unsigned int frame);

        /// Draw all element
        void draw(void);
};

#endif