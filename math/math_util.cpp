#include <iostream>
#include"math_utils.h"
struct Rectangle
{
    double length;
    double width;
    double area(double length, double width)
    {
        return length*width;
    }
    double area(double length)//for square
    {
        return length*length;

    }
     double pow(double base, int pow)//deafualt argument
        {
            int result=1;
            for(int i=0;i<pow;i++)
            {
                result*=base;
            }
            return result;

        }
    


};