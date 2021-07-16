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

#include <cstdlib>

#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#define WINDOW_WIDTH    800
#define WINDOW_HEIGHT   600

class Window
{
    private:
        /// Window name
        const char *m_window_name = "Rubix Cube";

        /// Window
        GLFWwindow *m_window;

    protected:

    public:
        /// Default Constructor
        Window(void);

        /// Destructor
        ~Window(void);

        ////////////////////////////////////////

        /// \return true if the window is open
        bool isOpen(void);

        ////////////////////////////////////////

        /// Control test
        void pollEvent(void);
};

#endif