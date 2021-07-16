/**
 * @file Triangle.hpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _TRIANGLE_HPP_
#define _TRIANGLE_HPP_

class Triangle
{
    private:
        void initVulkan(void);
        void mainLoop(void);
        void cleanup(void);

    protected:

    public:
        void run(void);
        
};

#endif