#include <iostream>
using namespace std;

int divide(int x, int y, int& result){ //& means pass by reference, so result is the same as the result in main
    if(y == 0){
        return -1; //error code
    }
    else{
        result = x / y;
        return 0; //success code
    }
}

int main(int argc, char const *argv[])
{
    int result = 0;
    int x = 20;
    int &y = x;
    y = 10;
    cout << "x: " << x << " y: " << y << endl; //x and y are the same variable
    if(divide(10, 2, result) == -1){
        cout << " Cannot divide by 0" << endl;
    }
    else{
        cout << "The result is: " << result << endl;
    }
    return 0;
}
