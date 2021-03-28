#include <iostream>

using namespace std;

int main()
{
    const int k = 6;
    int i;
    char B[k] = "Libri";
    for (i = 0; i < k; i++)
        cout << " " << B[i];
    cout << "\n\n";
    return 0;
}