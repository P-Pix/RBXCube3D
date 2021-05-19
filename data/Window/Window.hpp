#if !defined(__WINDOW__)
#define __WINDOW__

#include <OGRE/Ogre.h>
#include <OGRE/OgreRoot.h>
#include <OGRE/OgreRenderWindow.h>
#include <OGRE/OgreCamera.h>
#include <OGRE/OgreRenderSystem.h>
#include <OGRE/OgrePlugin.h>

#include <string>
#include <map>
#include <iostream>
#include <alloca.h>
class Window
{
    public:
        // Constructor / Destructor
            // Constructor
                Window();
            
            // Destructor
                ~Window();

        // Accessor
            bool isOpen();

    private:
        // Variable
            // Basic
                int m_widthwindow = 400,
                    m_heightwindow = 400;

            // Ogre
                Ogre::Root *m_Root;
                Ogre::RenderSystem *m_RenderSystem;
                Ogre::RenderWindow  *m_Window;
};

#endif