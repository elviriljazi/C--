#include <iostream>
#include <math.h>
using namespace std;
double teoremaPitagores(double a, char shenja, double b);
void llogarit(double r, double h, double s);
void printManual();

const double pi = 3.1415;

int main()
{
    double r, h, s;
    char type;
    printManual();
    cin >> type;
    switch (type)
    {
    case '0':
        cout << "Rrezja r = ";
        cin >> r;
        cout << "Lartësia h = ";
        cin >> h;
        s = teoremaPitagores(r, '+', h);
        llogarit(r,'+',h);
        break;
    case '1':
        cout << "Lartësia h = ";
        cin >> h;
        cout << "Gjeneratrisa (Përftuesja) s = ";
        cin >> s;
        if (h <= s)
        {
            r = teoremaPitagores(s, '-', h);
            llogarit(r, h, s);
        }
        break;
    case '2':
        cout << "Gjeneratrisa (Përftuesja) s = ";
        cin >> s;
        cout << "Rrezja r = ";
        cin >> r;
        if (r <= s)
        {
            r = teoremaPitagores(s, '-', r);
            llogarit(r, h, s);
        }
        break;

    default:
        cout << "Nuk keni zgjedhur asnjë nga mënyrat" << endl;
        break;
    }

    return 0;
}
void llogarit(double r, double h, double s)
{
    cout << "Syprina është S ≈ " << (pi * pow(r, 2) * h) / 3 << endl;
    cout << "Vëllimi është V ≈ " << pi * r * (r + s) << endl;
    return;
}
double teoremaPitagores(double a, char shenja, double b)
{
    int c = 0;
    switch (shenja)
    {
    case '-':
        c = sqrt(pow(a, 2) - pow(b, 2));
        break;
    case '+':
        c = sqrt(pow(a, 2) + pow(b, 2));
    default:
        break;
    }
    return c;
    
}
void printManual()
{
    cout << "Programi për llogaritjen Syprinës dhe Vëllilimit Konit\n"
         << "0: LLograit sipas rrezes dhe lartësis\n"
         << "1: LLograit sipas lartesis dhe perftueses\n"
         << "2: LLograit sipas perftueses dhe rrezes\n\n"
         << "Zgjedh nje nga menyrat:";

    return;
}