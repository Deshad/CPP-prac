#include <fstream>
#include <iostream>
#include <vector>
int main()
{
    std::ifstream file("text.txt");
    std::vector<char> lines;//changing to char vector

    char input;
    while(file >> input){
        lines.push_back(input);
    }
    for (char line : lines){
        std::cout<<line<<"\n";
    }
    return 0;
}