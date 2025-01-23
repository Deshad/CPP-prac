#include <fstream>
#include <iostream>
#include <vector>
/*

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

*/
/*file.get()
int main()
{
    std::ifstream file ("text.txt");
    char temp= file.get();//gives first character of the file
    std::cout<<temp<<std::endl;
}

*/
/* getline
int main()
{
    std::ifstream file ("text.txt");
    std::string line;
    getline(file,line);
    std::cout<<line<<std::endl;
    return 0;
}

*/
/* multidimensional array

int main()
{
    int grades[][3]={{85,92,78},{95,85,90},{70,82,98}};
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            std::cout<<grades[i][j]<<" ";
        }
        std::cout<<std::endl;
    
    }
}
*/
