#include "Window.hpp"

#include <iostream>

// Constructor / Destructor
    // COnstructor
        Window::Window()
        {
            std::cout << "window create" << std::endl;
        }

    // Destructor
        Window::~Window()
        {
            std::cout << "window delete" << std::endl;
        }

// Accessor
        bool Window::isOpen()
        {
            return this -> m_Window -> isClosed();
        }