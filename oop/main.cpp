#include <iostream>

struct User 
{   //by defualt, struct members are public
    
   std::string get_status()
   {
    return status;
   }
    std::string first_name;
    std::string last_name;
    private:
        std::string status;


};

int main() 
{
    User me;
    me.first_name = "John";
    me.last_name = "Doe";
    //me.status = "Active";
    std::cout<<"Status:"<<me.get_status()<<std::endl;

    return 0;

}