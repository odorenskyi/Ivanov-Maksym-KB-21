#include <iostream>
#include <cmath>
#include <ModulesIvanov.h>

using namespace std;

int main()
{
    double x, y, z, a, b;
    cin >> x >> y >> z
        >> a >> b;
    cout << "Ivanov Max ©" << endl;
        if(a <= b-32)
        {
            cout << "A <= B - 32 is true" << endl;
        }
        else
        {
            cout << "A <= B - 32 is false" << endl;
        }



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
        cout << c_calculation(x,y);

    return 0;
}
