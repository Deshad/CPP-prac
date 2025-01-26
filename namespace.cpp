#include <iostream>

namespace utils 
{
    void print_array(const int data[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}
}
    
using namespace utils;


int main() 
{
    int data[] = {1, 2, 3, 4, 5};
    utils::print_array(data, 5);//namespace access
    std::cout << "data[