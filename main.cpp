/**
 * @file main.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include "include/Window.h"

int main()
{
    Window Window;

    while(Window.isOpen())
    {
        Window.pollEvent();
    }

    Window.~Window();
    
    return 0;
}