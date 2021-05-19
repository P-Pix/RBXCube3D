#include "Window.hpp"

// Constructor / Destructor
    // COnstructor
        Window::Window()
        {
            this -> m_Root -> loadPlugin("plugins.cfg");
            /*this -> m_Root = new Ogre::Root::Root();
            std::cout << root -> showConfigDialog() << std::endl;
            this -> m_Root -> setRenderSystem(this -> m_RenderSystem);
            this -> m_Window = this -> m_Root -> initialise(true, "Rubix Cube");
            std::cout << "window create" << std::endl;*/
        }

    // Destructor
        Window::~Window()
        {
            std::cout << "window delete" << std::endl;
        }

// Accessor
        bool Window::isOpen()
        {
            return 1;//!this -> m_Window -> isClosed();
        }