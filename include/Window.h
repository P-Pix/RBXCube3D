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

//#include <GLES3/gl32.h>
//#include <EGL/egl.h>

#include <GL/gl.h>
#include <GLFW/glfw3.h>

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

        /// Window 
        GLFWwindow *m_Window;

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

        ////////////////////////////////////////

        /// Constrol checking
        void pollEvent();
};

#endif