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
#include <glm/glm.hpp>

#define WINDOW_WIDTH    800
#define WINDOW_HEIGHT   600

class Window
{
    private:
        /// Window name
        const char *m_Window_name = "Rubix Cube";

        bool m_open = true;

        std::vector<VkImageView> m_SwapChainImageViews;
        std::vector<VkImage> m_SwapChainImage;

        glm::vec2 positions[3] = 
        {
            glm::vec2(0.0, -0.5),
            glm::vec2(0.5, 0.5),
            glm::vec2(-0.5, 0.5),
        };

        glm::vec4 vect4d = glm::vec4(positions[0], 0.0, 1.0);

        /// Window
        GLFWwindow *m_Window;

        VkInstance m_instance;
        VkSurfaceKHR m_Surface;
        VkDevice m_device;
        VkFormat m_SwapChainImageFormat;

        void createInstance(void);
        void setupDebugMesage(void);
        void pickPhysicalDevice(void);
        void createSurface(void);
        void createImageViews(void);
        void createGraphicsPipeline(void);

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
};

#endif