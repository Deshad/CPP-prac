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
/*Static Data Members

class User 
{   static int user_count; //static int user_count=0  x;//can assign static value inline
    
    std::string status="Active";
    
    public:
        static int get_user_count()
        {
            return user_count;//returning static data member
        }
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
        user_count++;//incrementing static data member
        
    }
    User(std::string first_name, std::string last_name,std::string status)
    {
        this->first_name=first_name;
        this->last_name=last_name;
        this->status=status;
        user_count++;//incrementing static data member
    }
    ~User()//creating a destructor for class User
    {
        user_count--;//decrementing static data member
    }
};
int User::user_count=0;//here we initialize static data member
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
   User user,user1,user2;//creating users
   std::cout<<User::get_user_count()<<std::endl;
}
*/
/*Overloading insertion&extraction operator
class User 
{   static int user_count; //static int user_count=0  x;//can assign static value inline
    
    std::string status="Active";
    
    public:
        static int get_user_count()
        {
            return user_count;//returning static data member
        }
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
        user_count++;//incrementing static data member
        
    }
    User(std::string first_name, std::string last_name,std::string status)
    {
        this->first_name=first_name;
        this->last_name=last_name;
        this->status=status;
        user_count++;//incrementing static data member
    }
    ~User()//creating a destructor for class User
    {
        user_count--;//decrementing static data member
    }
};
int User::user_count=0;//here we initialize static data member
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

std::ostream& operator<<(std::ostream& output,User user)
{
    output<<"First Name: "<<user.first_name<<", Last Name: "<<user.last_name<<", Status: "<<user.get_status()<<std::endl; 
    return output;
}
std::istream& operator>>(std::istream& input,User& user)
{
    std::cout<<"Enter First Name: ";
    input>>user.first_name;
    std::cout<<"Enter Last Name: ";
    input>>user.last_name;
    std::cout<<"Enter Status (active/inactive): ";
    std::string status;
    input>>status;
    user.set_status(status);
    return input;


}

int main() 
{
   //User user,user1,user2;//creating users
   //std::cout<<User::get_user_count()<<std::endl;//we can output method of class User
   //but can we output user directory here?//std::cout<<user1<<std::endl;?
User user;
std::cin>>user;//input 
std::cout<<"User Output Details:"<<user<<std::endl;//output
}
*/












