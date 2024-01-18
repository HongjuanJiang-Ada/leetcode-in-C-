#include <iostream> //header files provide funtion and class declarations that we can use in our C++ programs
using namespace std;

int main(int argc, const char** argv) { //main function serves as the entry point for all C++ programs
    int a = 5, b = 10;
    //comma operator, evaluates all expressions and returns the last one.
    int result = (a++, b++, a + b);  
    cout << result << endl;
    cout << "a: " << a << " b: " << b << endl;
    //comma operator allows the for loop to include multiple expresssions in the innitialization and incrementation sections
    //The result of the entire comma operator is the value of the rightmost expression, so the loop will run until i = 4
    for (int i = 0, j=0; i < 5; ++i, ++j)
    {
        cout << "i: " << i << " j: " << j << endl; //overloading and chaining the << operator
    }
    return 0;
}