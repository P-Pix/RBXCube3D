/**
 * @file main.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/Window.hpp"

int main(void);

int main(void)
{
    Window Window;

    while(Window.isOpen()) 
    {
        Window.pollEvent();
    }
    Window.~Window();
    return EXIT_SUCCESS;
}