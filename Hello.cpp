//my first program in C++
#include <iostream>
using namespace std; //the using directive tells the compiler that we are using the std namespace

int main() { //the execution of every C++ program begins with the main function
    //declara variables
    int a, b;
    int result;

    //process
    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;

    //print out the result
    cout << result;
    
    cout << "Hello World" << std::endl;
    cout << "I'm a C++ program" << std::endl;
    return 0; 
} //statements are executed in the same order as they appear within a function's body
