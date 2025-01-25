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
    



int main() 
{
    int data[] = {1, 2, 3, 4, 5};
    utils::print_array(data, 5);
    std::cout << "data[0] = " << data[0] << std::endl;
    return 0;
}