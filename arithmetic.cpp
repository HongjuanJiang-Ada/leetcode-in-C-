#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

class Calculator
{
    public:
    int multiply(int x, int y){
        return x * y;
    }
};

int main(int argc, char const *argv[])
{
    int x = 5, y = 10;

    //using the standalone function add
    int sum = add(x, y);
    cout << "The sum of 5 + 10 is: " << sum << endl;

    //using a class and member function
    Calculator calc;
    int product = calc.multiply(x, y);
    cout << "The product of 5 * 10 is: " << product << endl;
    
    return 0;
}
