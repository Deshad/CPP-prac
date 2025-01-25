#include "math_utils.h"
int main ()
{
    Rectangle rect;
    rect.length=5;
    rect.width=10;
    std::cout<<"Area is "<<rect.area(rect.length)<<std::endl;
    return 0;

}
