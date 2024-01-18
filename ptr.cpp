#include <iostream>
#include <memory>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unique_ptr<int> p1(new int(5));
    unique_ptr<int> p2 = make_unique<int>(10);

    cout << *p1 << ", " << *p2 << endl;
    return 0;
}
