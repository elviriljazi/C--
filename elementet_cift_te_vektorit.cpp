#include <iostream>

using namespace std;
int main()
{
    int V[5] = {4, -7, 5, 10, 7};
    int numruesi = 0;
    for (int i = 0; i < 5; i++)
        if (V[i] % 2 == 0)
            numruesi++;
    cout << numruesi << endl;

    return 0;
}
