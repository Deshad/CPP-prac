#include <iostream>

class User 
{   //by defualt, class members are private
    std::string status="Active";
    
    public:
    
    std::string first_name;//this is a data member of class User
    std::string last_name;
    std::string get_status()
   {
    return status;
   }
     
    
        


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