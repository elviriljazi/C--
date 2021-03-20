#include <iostream>

using namespace std;

int faktroiel(int n);

int main()
{
    int n;
    cout << "Jep nje numer = ";
    cin >> n;
    cout << n << "! = " << faktroiel(n) << endl;

    return 0;
}
int faktroiel(int n)
{
    if (n == 1)
        return 1;
    else
        return n * faktroiel(n - 1);
}
