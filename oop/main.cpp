#include <iostream>
#include <vector>

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
int add_user_if_not_exist(std::vector<User> &users,User user)
{
    for(int i=0;i<users.size();i++)
    {
        if(users[i].first_name==user.first_name &&
            users[i].last_name==user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size()-1;
}

int main() 
{
    std::vector<User> users;
    users.push_back(User());

    User user1, user2,user3;
    user1.first_name = "John";
    user1.last_name="bhat";

    user2.first_name="Johny";
    user2.last_name="gill";
    
    user3.first_name="alex";
    user3.last_name="sidhu";
    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user;
    user.first_name="adam";
    user.last_name="smith";

    std::cout<< add_user_if_not_exist(users,user)<<std::endl;
    std::cout<<users.size()<<std::endl;


    
    
    return 0;

}