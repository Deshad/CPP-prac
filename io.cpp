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
/*nested vector
int main()
{
    std::vector<std::vector<int>>  grades= {{85,92,78},{95,85,90},{70,82,98}};
    for (int i=0;i<grades.size();i++)
    {
        for(int j=0;j<grades[i].size();j++)
        {
            std::cout<<grades[i][j]<<" ";
        }
        std::cout<<std::endl;
    
    }
}

*/
/*

void print_array(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        std::cout<<arr[i]<<"\t";
    }
}
    
int main()
{
    int data[]={1,2,3};
    print_array(data,3);
}

*/
/*swapping 
void swap(  int &a, int &b)//passing by reference to avoid making a copy of the value
{
    int temp=a;
    a=b;
    b=temp;
    std::cout<<"after swapping : a="<<a<<" b="<<b<<std::endl;
}

int main()
{
    int a=5, b=10;
    std::cout<<"before swapping : a="<<a<<" b="<<b<<std::endl;
    swap(a,b);

}

*/
/*Function Overloading

#include<string>

void swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
    std::cout<<" a="<<a<<" b="<<b<<std::endl;


}
void swap(std::string &a ,std::string &b)
{
    std::string temp=a;
    a=b;
    b=temp;
    std::cout<<" a="<<a<<" b="<<b<<std::endl;

}
int main()
{
    std::string first_anme="Gagan";
    std::string last_name="Deshad";
    std::cout<<"Before swapping : first_name="<<first_anme<<" last_name="<<last_name<<std::endl;
    swap(first_anme,last_name);

}
*/
/* overloading example with struct
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


};
int main ()
{
    Rectangle rect;
    rect.length=5;
    rect.width=10;
    std::cout<<"Area is "<<rect.area(rect.length)<<std::endl;
    return 0;

}
*/

