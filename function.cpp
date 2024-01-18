#include <iostream>
using namespace std;

//ptototype declaration
int multiplyNumbers(int x, int y);

int main(int argc, char const *argv[])
{
    int x = 5, y = 10;
    cout << "5 * 10 =  " << multiplyNumbers(x, y) << endl;
    return 0;
}

int multiplyNumbers(int x, int y){
    int result = x * y;
    return result;
}