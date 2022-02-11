#include <iostream>
#include <cmath>
#include <locale.h>
#include <locale>
#include <ModulesIvanov.h>

using namespace std;


void Greeting()
{
    cout << "Ivanov Max ";
    std::wcout << L"\x00A9" << endl;
}

void AandB(double a, double b)
{
    if(a <= b-32)
        {
            cout << "A <= B - 32 is true" << endl;
        }
        else
        {
            cout << "A <= B - 32 is false" << endl;
        }
}

void XYandZ(double x, double y, double z)
{
    if (x < 8)
        {
            cout << "x10 = " << x << " x16 = " << "0" << x << endl;
        }
        else
        {
            int x1;
            x1 = x/16;
            cout << "x10 = " << x << " x16 = " << "0" << x1 << endl;
        }
        if (y < 8)
        {
           cout << "y10 = " << y << " y16 = " << "0" << y << endl;
        }
        else
        {
            int y1;
            y1 = y/16;
            cout << "y10 = " << y << " y16 = " << "0" << y1 << endl;
        }
        if (z < 8)
        {
            cout << "z10 = " << z << " z16 = " << "0" << z << endl;
        }
        else
        {
            int z1;
            z1 = z/16;
            cout << "z10 = " << z << " z16 = " << "0" << z1 << endl;
        }
}
int main()
{
    setlocale(LC_ALL, "ukr");
    double x, y, z, a, b;
    cin >> x >> y >> z
        >> a >> b;
        Greeting();
        AandB(a, b);
        XYandZ(x, y, z);
        cout << c_calculation(x,y);

    return 0;
}
