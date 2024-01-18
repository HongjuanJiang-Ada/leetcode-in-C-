#include <iostream>
using namespace std;

int main () {
    //initialization
    int a = 5;
    int b(3);
//    int c{2}; maybe this new feature is not supported well
    int c = 2;
    int result;

    a = a + b;
    result = a - c;
    cout << result << endl;

    return 0;
}