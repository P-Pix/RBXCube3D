#include <Box.hpp>
#include <OGRE/Ogre.h>
#include <vector>
#include <iostream>

// Constructor / Destructot
    // Constructor
        Box::Box()
        {
            std::cout << "Box create" << this << std::endl;
        }
        Box::Box(float x, float y, float z, float len)
        {
            m_pos = Ogre::Vector3(x, y, z);
            m_len = len;
            std::cout << "Box create" << this << std::endl;
        }

    // Destructor
        Box::~Box()
        {
            std::cout << "Box delete" << this << std::endl;
        }

// Accessor

// Function
    // Show
        void Box::showBox()
        {
        }