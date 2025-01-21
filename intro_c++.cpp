// intro_c++.cpp
#include <cfloat>
#include <climits>
#include <ios>
#include <iostream>
#include <cmath>//math library/header

using std::cout;//standard 
using std::cin;//standar
//function
/*double myPower(double base, double exp)
{
    double result=1;
    for (int i=0; i<exp; i++)
    {
        result=result*base;
    }
    return result;
}
//creating a function
int main() 
{
    I can write anything in between and 
    also i can write in more lines*/


    //int slices;//initialization of the variable
    //cin>>slices;
    //cout<<"You have "<<slices<<" slices."<<std::endl;
    //lets define our base and exponent
    /*int base, exponent;
    cout<<"what is the base:";
    cin>> base;
    cout<<"what is the exponent:";
    cin>> exponent;

   


    double power = pow(base, exponent);
    cout<< power;*/
    //double power=myPower(10,4);
    //cout<< power;*/
//int data type
/*int main(){
    short a; //int data types

    int x;
    long b;
    long long c;
    unsigned short d;
    unsigned long e;
    unsigned long long f;
    cout<<sizeof(long long);

    cout<<LLONG_MAX;



}*/
/*CHAR DATaTYPE
int main()
{
    unsigned char x = 131;//for char we have to use single quotes as double quotes are reserved for strings in c++
    //the 65 char value is A 
    cout<<x<<std::endl;
}

*/
/*Escape sequence
int main()
{
    cout<<"Hello\"There\""<<std::endl;
}

*/


/*BOOL dataTYPE

int main(){
    bool pizza=false;//to set flags in loops 
    cout<<std::boolalpha<<pizza<<std::endl;
}
*/

/*FLoating Data Type
int main(){
    float a=10.0/3;//
    a=a*10000000000;
    double b;
    long double c;
    cout<<std::fixed<<a<<std::endl;
    cout<<"Printing the number of digits upto "<< FLT_DIG<<std::endl;
}


*/
/*Constant dataTYPE
#define X 10
int()
{
    int x=5;//literal constant 
    //symbolic consatnts
    const int x=10;
}
*/
/*Mathematcial operator #include<cmath>
int main(){

    cout<<sqrt(2)<<std::endl;
    cout<<ceil();
    cout<<round();
    cout<<fmax();
    cout<<fmin();
    cout<<trunk();
    cout<<abs();

}

*/


/*Strings Part 1
#include <string>
int main()
{
    std::string greeting ="hello";
    std::string complete_greeting=greeting + "there";
    complete_greeting+="!";
    std::cout<<complete_greeting<<std::endl;
    
    std::cout<<"elngth of the above string is "<<complete_greeting.length()<<std::endl;
}

*/
/*
int main(){

    std::string greeting;

    std::cin >>greeting;
    std::cout<<greeting<<std::endl;
    std::string left_over;
    std::cin>>left_over;
    std::cout<<left_over<<std::endl;
    //std::string left_over;
    std::cin>>left_over;
    std::cout<<left_over<<std::endl;



}

*/
/*String line 
int main(){
    std::string greeting;
    getline(std::cin,greeting);
    std::cout<<greeting<<std::endl;
}
*/
/*Some string Functions
int main(){
    std::string greeting="hello";
    //greeting.insert(3, "         ");
    //greeting.erase(2,2);//erases two elements
    //greeting.erase(2);
    greeting.replace(0,4,"yes");
    std::cout<<greeting<<std::endl;
}

*/

/*String Function 2
int main()
{
    std::string greeting="What the hell";
    //std::cout<<greeting.find("hell")<<std::endl;
    //td::cout<<greeting.substr()
    //std::cout<<greeting.compare("");

}

*/

/*Auto sign feature

int main()
{
    auto x = 5u;

}
*/






    

