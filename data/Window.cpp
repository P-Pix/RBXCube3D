#include "Window.hpp"

#include <iostream>
#include <string>
#include <map>

// Constructor / Destructor
    // COnstructor
        Window::Window()
        {
            this -> m_Root -> initialise(true, "Rubix Cube");
            this -> m_Window = this -> m_Root -> getAutoCreatedWindow();
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
            return !this -> m_Window -> isClosed();
        }