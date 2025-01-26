#include <iostream>
#include <vector>

/*
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
    User()//creating a constructor for class User
    {
        std::cout<<"Constructor\n";
    }
    User(std::string first_name, std::string last_name)
    {
        this->first_name=first_name;
        this->last_name=last_name;
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
*/
/*Constructor & Destructor
 std::cout<<"Destructor\n";
    }
     
    
        


};
int add_user_if_not_exist(std::vector<User> &users,User user)
{class User 
{   //by defualt, class members are private
    std::string status="Active";
    
    public:
    
        std::string first_name;//this is a data member of class User
        std::string last_name;
        std::string get_status()
    {
        return status;
    }
    User()//creating a constructor for class User
    {
        std::cout<<"Constructor\n";
    }
    User(std::string first_name, std::string last_name,std::string status)
    {
        this->first_name=first_name;
        this->last_name=last_name;
        this->status=status;
    }
    ~User()//creating a destructor for class User
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
    User user("John", "bhat","active");
    std::cout<<user.get_status()<<std::endl;

}
*/
/*getter and setters

class User 
{   //by defualt, class members are private
    std::string status="Active";
    
    public:
    
        std::string first_name;//this is a data member of class User
        std::string last_name;
        std::string get_status()//this is a getter
        {
            return status;
        }
        void set_status(std::string status)//this is a setter
        {
            if (status=="active" || status=="inactive")
            {
                this->status=status;

            }
            else {
            {
                std::cout<<"Invalid status. Status should be either 'active' or 'inactive'.";
            }
            }
            
        }

    User()
    {
        
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
   User user;
   user.set_status("active");
   std::cout<<user.get_status()<<std::endl;


}

*/


