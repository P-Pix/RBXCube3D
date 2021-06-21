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

#include "src/operator/operator<<.cpp"

int main()
{
    Window Window;

    std::cout << Window.getTrianglePoint() << std::endl;

    while(Window.isOpen())
    {
        Window.pollEvent();
        Window.draw();
    }

    Window.~Window();
    
    return 0;
}