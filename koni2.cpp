#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const double pi = 3.1415;
    double S, V, r, h, s;
    cout << "Rrezja r = ";
    cin >> r;
    cout << "Lartesia h = ";
    cin >> h;
    V = (pi * pow(r,2) * h) / 3;
    S = pi * r * (r + sqrt(pow(r,2) + pow(h,2)));
    cout << "Syprina eshte S ≈ " << S << endl;
    cout << "Vellimi eshte V ≈ " << V << endl;
    return 0;
}
