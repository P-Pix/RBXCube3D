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

#include <vulkan/vulkan.hpp>
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

        /*
        struct QueueFamilyIndices 
        {
            std::optional<uint32_t> graphicsFamily;
            std::optional<uint32_t> presentFamily;
            bool isComplete() 
            {
                return graphicsFamily.has_value() && presentFamily.has_value();
            }
        };
        */

        /// Window
        GLFWwindow *m_window;

        VkInstance m_instance;
        VkSurfaceKHR m_Surface;

        void createInstance(void);
        void setupDebugMesage(void);
        void pickPhysicalDevice(void);

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

        ////////////////////////////////////////

        /// Control test
        void pollEvent(void);

        void draw(void);
};

#endif