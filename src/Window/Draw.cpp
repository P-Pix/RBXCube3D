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
}

void Window::allDrawing(void)
{
    
}

void Window::drawRubikCube(std::vector<std::vector<int>> Rubik)
{
    
}

void Window::createImageViews(void)
{
    m_SwapChainImageViews.resize(m_SwapChainImage.size());

    for(uint i = 0; i < m_SwapChainImage.size(); i ++)
    {
        VkImageViewCreateInfo createInfo{};
        createInfo.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
        createInfo.image = m_SwapChainImage[i];
        createInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
        createInfo.format = m_SwapChainImageFormat;
        createInfo.components.r = VK_COMPONENT_SWIZZLE_IDENTITY;
        createInfo.components.g = VK_COMPONENT_SWIZZLE_IDENTITY;
        createInfo.components.b = VK_COMPONENT_SWIZZLE_IDENTITY;
        createInfo.components.a = VK_COMPONENT_SWIZZLE_IDENTITY;
        createInfo.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        createInfo.subresourceRange.baseMipLevel = 0;
        createInfo.subresourceRange.levelCount = 1;
        createInfo.subresourceRange.baseArrayLayer = 0;
        createInfo.subresourceRange.layerCount = 1;
        if(vkCreateImageView(m_device, &createInfo, nullptr, &m_SwapChainImageViews[i]) != VK_SUCCESS)
        {
            throw std::runtime_error("failled to create image views");
        }
    }
}

void Window::createGraphicsPipeline(void)
{
    
}