/**
 * @file main.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/Window.hpp"
#include "include/Rubix.hpp"

/// main function
int main(void);

int main(void)
{
    Rubix rubix;

    while(!rubix.isComplet())
    {
        rubix.randomAction();
    }

    std::cout << rubix.getAction().size() << " actions for the resolution" << std::endl;
    /*
    __cplusplus;
    Window Window;

    while(Window.isOpen() && Window.wouldOpen()) 
    {
        Window.pollEvent();
        Window.draw();
    }
    */
    return EXIT_SUCCESS;
}