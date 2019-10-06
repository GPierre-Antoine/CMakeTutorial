//
// Created by pierreantoine on 06/10/2019.
//

#include <cmath>
#include <iostream>


namespace my_math
{
    double sqrt(double value)
    {
        std::cout << "USING custom sqrt" << std::endl;
        return ::sqrt(value);
    }
}