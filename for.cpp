#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    /*
    Initialization (executed once)
    Condition Check (Start of every iteration)
    Loop body (executed if condition is true)
    Increment (End of each iteration)
    i++: the increment in "i++" immediately after the statement in which it is used, but the value of "i" is used in the statement. 
    (it creates a temporay copy of "i" before incrementing it to hold the orginal value during the expression evaluation.)
    ++i is more efficiant than i++ in objects and iterators.
    */
    {
        cout << "i: " << i << endl;
    }
    
    int original[] = {1, 2, 3, 4, 5};
    int copy[6] = {0};
    int length = sizeof(original) / sizeof(original[0]);
    
    //copy the original array to the copy array, but start from the second position
    for (int i = 0, j = 1; i < length; )
    {
        copy[j++] = original[i++]; //use i, then increment it for the next round
    }
    
    //print the copy
    for (int k = 0; k < 5; k++)
    {
        cout << "copy[" << k << "]: " << copy[k] << endl;
    }
    
    return 0;
}
