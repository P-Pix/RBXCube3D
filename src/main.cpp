/**
 * @file main.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../include/Window.hpp"
#include "../include/Rubik.hpp"

/// main function
int main(void);

int main(void)
{
    Rubik Rubik;
    Window Window;

    std::cout << "_______" << std::endl;

    Rubik.randomShuffle();

    while(Window.isOpen() && !Rubik.isComplet() && !Window.wouldClose()) 
    {
        Window.pollEvent();
        //Rubik.analyse();
        Window.drawRubikCube(Rubik.getRubikCube());
        Window.draw();
    }
    
    Rubik.printRubikCube();

    std::cout << Rubik.getAction().size() << " actions for the resolution" << std::endl;
    std::cout << "__cplusplus version = " << __cplusplus << std::endl;
    return EXIT_SUCCESS;
}