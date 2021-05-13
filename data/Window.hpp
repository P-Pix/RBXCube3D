#if !defined(__WINDOW__)
#define __WINDOW__

#include <OGRE/Ogre.h>
#include <string>
#include <map>

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
                Ogre::RenderWindow  *m_Window;
                const Ogre::NameValuePairList *m_NameValuePairList;
};

#endif