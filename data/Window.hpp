#if !defined(__WINDOW__)
#define __WINDOW__

#include <OGRE/Ogre.h>

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

            // Ogre
                Ogre::RenderWindow  *m_Window;
};

#endif