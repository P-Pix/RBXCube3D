#if !defined(__BOX__)
#define __BOX__

#include <OGRE/Ogre.h>
#include <OGRE/OgreRoot.h>
#include <OGRE/OgreRenderWindow.h>
#include <OGRE/OgreCamera.h>
#include <OGRE/OgreRenderSystem.h>

#include <vector>

class Box
{
    public:
        // Constructor / Destructot
            // Constructor
                Box();
                Box(float x, float y, float z, float len);

            // Destructor
                ~Box();
        
        // Accessor

        // Function
            void showBox();
    private:
        // Variable
            // basic
                float m_len;

            // Vector

            // Ogre
                Ogre::Vector3 m_pos;
};

#endif