// intro_c++.cpp
#include <cfloat>
#include <climits>
#include <ios>
#include <iostream>
#include <cmath>//math library/header
#include <vector>/**/
#include <vector>
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
/*Operator precendece
int main()
{
    //cout<<10/4.;
    //std::cout<<20%5;
    double x=10;
    double y=100;
    (y=x)=100;
    cout<<x<<"\t"<<y;

}

*/
/*If else Loop Branching
int main()
{
    int age=27;
    if(age<18)
    {
    std::cout<<"your are a minor"<<std::endl;
    }
    else
    {
        cout<<"you are adult"<<std::endl;
    }
}
*/
/*
int main()
{
    std::string name ="gagan";
    std::string guess;
    std::cin >> guess;

    if (guess==name){
        cout<<"correct"<<std::endl;
    }
    else{
        cout<<"not correct";
    }
    return 0;

}
*/
/*Switch
int main()
{

    int age;
    cin>>age;
    switch(age)
    {
        case 13:
            std::cout<<"you are right";
            break;
        case 14:
        std::cout<<"you are 14";
        break;

    }
    return 0;

}

*/
/*while loop
int main(){
    int i=0;
    while(i<10){
        std::cout<<i<<std::endl;
        i++;
    }
    return 0;
}
*/
/*for loop
int main()
{
    for(int i =10;i>0;i--)
    {
        cout<<i<<std::endl;
        
    }
    return 0;
}


*/
/*doWhile Loop

int main()
{
    std::string password="hello";
    std::string guess;

    do {
        std::cout<<"Guess the pass";
        std::cin>>guess;


    
    }while (guess!=password);

}

*/
/*break
int main()
{
    std::string sentence = "hello";
    for(int i=0;i<sentence.length();i++)
    {
        if(sentence[i] == 'o'){
            std::cout<<i;
            break;
            
        }
        
    }

}


*/

/*continue
int main()
{
    std::string sentence = "hello";
    for(int i=0;i<sentence.length();i++)
    {
        if(sentence[i] == 'o'){
            continue;
        }
        std::cout<<sentence[i];
        
    }

}

*/

/*Condiitonal operators

int main()
    {
        int guess;
        int answer=10;
        cout<<"Guess a number between 1 and 100";
        cin>>guess;
        int points=guess==answer?10:0;//conditional operator
        std::cout<<"points: "<<points<<std::endl;
        
    }

*/

/*1/0 Game
using a do while loop with switch statement
int main()
{
    int choice;
    
    do{
    std::cout<<"1-Play the Game\n"<<"0- Exit"<<std::endl;
    std::cin>>choice;
    switch(choice)
    {
        case 0:
            std::cout<<"Exting the game"<<std::endl;
            return 0;
        case 1:
            std::cout<<"Playing the game"<<std::endl;
            break ;
        default:
            std::cout<<"Invalid choice"<<std::endl;
        
    }


    }
    while(choice!=0);
    

}

*/
/*Number guess game
#include <iostream>
#include <cstdlib> // rand()
#include <ctime>   // seeding rand()

// Function definition for playGame

void playGame() {
    int random = rand() % 100; // random number between 0 and 99
    int guess;
    
    std::cout << "Guess a number between 0 and 99: ";
    std::cin >> guess;
    
    while (true) {
        if (guess > random) {
            std::cout << "Too high, guess lower: ";
            std::cin >> guess;
        } else if (guess < random) {
            std::cout << "Too low, guess higher: ";
            std::cin >> guess;
        } else {
            std::cout << "Congratulations, you guessed it!" << std::endl;
            break;
        }
    }
}

int main() {
    int choice;

    // Seed 
    std::srand(std::time(0));//srand(time(NULL)); // Using current time as seed
    
    do {
        std::cout << "1-Play the Game\n0- Exit" << std::endl;
        std::cin >> choice;

        switch (choice) {
            case 0:
                std::cout << "Exiting the game" << std::endl;
                return 0;
            case 1:
                std::cout << "Playing the game" << std::endl;
                playGame(); // Call playGam 
                break;
            default:
                std::cout << "Invalid choice" << std::endl;
        }
    } while (choice != 0);

    return 0;
}

*/
/*Array

int main()
{
    
   int guess[]={1,2,3,4,5,5,6,7};
   int size = sizeof(guess)/sizeof(guess[0]);//to find i in C++ array
   cout<<size<<std::endl;
   for(int i=0;i<size+10;i++)
   {
     std::cout<<guess[i]<<"\t";
   }

   

}
*/
/*Printing array function

void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    
    int guess[]={1,2,3,4,5,5,6,7};
    int size = sizeof(guess)/sizeof(guess[0]); 
    printArray(guess,size);

}


*/

/* A number guessing game with array

void printArray(const int guesses[], int count) {
    std::cout << "You made " << count << " guesses: ";
    for (int i = 0; i < count; ++i) {
        std::cout << guesses[i];
        if (i < count - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

// Function  playGame
void playGame() {
    int random = rand() % 100; //number between 0 and 99
    int guess;
    int guesses[100]; 
    int count = 0;   

    std::cout << "Guess a number between 0 and 99: ";
    std::cin >> guess;

    while (true) {
        guesses[count++] = guess; //record guess

        if (guess > random) {
            std::cout << "Too high, guess lower: ";
            std::cin >> guess;
        } else if (guess < random) {
            std::cout << "Too low, guess higher: ";
            std::cin >> guess;
        } else {
            std::cout << "Congratulations, you guessed it!" << std::endl;
            break;
        }
    }

    //  print the array and count
    printArray(guesses, count);
}

int main() {
    int choice;

    // Seed random number generator
    std::srand(std::time(0));

    do {
        std::cout << "1-Play the Game\n0- Exit" << std::endl;
        std::cin >> choice;

        switch (choice) {
            case 0:
                std::cout << "Exiting the game" << std::endl;
                return 0;
            case 1:
                std::cout << "Playing the game" << std::endl;
                playGame(); // Call playGame
                break;
            default:
                std::cout << "Invalid choice" << std::endl;
        }
    } while (choice != 0);

    return 0;
}

*/
/*vector
int main()
{
    std::vector<int> data ={1,2,3};
    data.push_back(12);
    std::cout<<data[data.size()-1]<<std::endl;
}


*/
/*STL array
#include <array>
int main()
{
    std::array<int,20> data ={1,2,3};
}
*/

/*Range based for loop
int main()
{
    int data[]={1,2,3,4,5};
    for(int i:data){
        std::cout<<i<<"\t";
    }
    /*simple loop 
    for(int i=0;i<5;i++)
    {
        std::cout<<data[i]<<"\t";
    }   
    std::cout<<"\n";
    */
    


