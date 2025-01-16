#include <iostream>
class Employee {
public:    
    std::string Name;
    std::string company;
    int Age;

    // Default constructor
    Employee() {}

    // Member function
    void IntroduceYourself(){
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Company: " << company << std::endl;
        std::cout << "Age: " << Age << std::endl;
    }
};

int main()
{
    // Create an object of the class
    Employee employee1;
    employee1.Name = "Gagan";
    employee1.company = "X";
    employee1.Age = 24;

    // Call the member function
    employee1.IntroduceYourself();

    return 0; // Return explicitly for clarity
}
