#include <iostream>
#include <iomanip>

using namespace std;

void sh1()
{
    double x = 2.67915;
    cout << setprecision(4) << x;
}
void sh2()
{
    const int m = 5;
    int i;
    int A[m] = {7, 2, -4, 9, 3};
    cout << "Vektori A"
         << "\n";
    for (i = 0; i < m; i++)
        cout << A[i] << " ";
    cout << "\n";
}
void sh3()
{
    const int m = 5;
    int i;
    int A[m] = {7, 2, -4, 9, 3};
    cout << "Vektori A"
         << "\n";
    cout << "A[m] = {";
    for (i = 0; i < m; i++)
        cout << setw(2) << A[i];
    cout << "}\n";
}
void sh4()
{
    const int m = 20;
    char A[m];
    cout << "Fjalia qe lexohet: ";
    cin.getline(A, m);
    cout << "Fjalia që u lexua" << A << "\n";
}
void sh5()
{
    int x, y;
    cout << "Vlera per x: ";
    cin >> x;
    cout << "Vlera per y: ";
    cin >> y;
    cout << x << (x == y ? " eshte " : " nuk eshte ") << "barazi me " << y << "\n";
}
void sh6()
{
    double x, y, z;
    cout << "Vlera x= ";
    cin >> x;
    cout << "Vlera y= ";
    cin >> y;
    z = -5;
    if (x < y)
        z = x + y;
    cout << "\nRezultati eshte z=";
    cout << z << "\n";
}
int main()
{
    
    return 0;
}
