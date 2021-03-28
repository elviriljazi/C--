#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 3;
    bool x;
    x = (a > b) && (a == (b + 2));
    cout << "Vlera e variables x=" << x << endl;
    return 0;
}