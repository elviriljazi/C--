#include <iostream>

using namespace std;

int main()
{
    int i, m;
    cout << "Vlera e variables m: ";
    cin >> m;
    double S = 0, P = 1;
    for (i = 1; i <= m; i++)
    {
        S += i;
        P *= i;
    }
    cout << "\n Shuma S=" << S << endl;
    cout << "\n Prodhimi P=" << P << endl;
    return 0;
}