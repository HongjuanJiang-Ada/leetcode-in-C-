#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    a = 5;
    b = 6;
    c = (a > b)? a : b; // if a > b, then c = a, else c = b
    cout << c << endl;
    if ((5 == 5) && (3 > 6)) // C++ only evaluates the second expression if the first expression is true, short-circuit evaluation
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}