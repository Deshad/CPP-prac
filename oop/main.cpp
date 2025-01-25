#include <iostream>

struct User 
{   //by defualt, struct members are public
    std::string first_name;
    std::string last_name;
    std::string status;


};

int main() 
{
    User me;
    me.first_name = "John";
    me.last_name = "Doe";
    me.status = "Active";
    std::cout << "Name: " << me.first_name << " " << me.last_name << std::endl;
    std::cout << "Status: " << me.status << std::endl;

    return 0;

}