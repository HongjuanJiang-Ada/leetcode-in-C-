#include <iostream>
using namespace std;

//const double PI = 3.1415926;
#define PI 3.1415926 // does not need semicolon, and this is a preprocesser directive, happans before compilation

int main() {
    double r = 5.0;
    double circle;
    circle = 2 * PI * r;
    cout << "The value of circle is: ";
    cout << circle;
    cout << '\n'; //'\n' is the same as endl
    return 0;
}