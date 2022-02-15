#include <iostream>
#include <cmath>
#include "ModulesIvanov.h"
using namespace std;

int main()
{

    double input[5], res[5];
    for(int i = 0; i < 5; i++)
    {
        double x, y, z;
        cout << "Test Case: " << i+1 << endl;
        cout << "Enter x:";
        cin >> x;
        cout << "Enter y:";
        cin >> y;
        cout << "Enter z:";
        cin >> z;
        cout << "Enter res:";
        cin >> input[i];
        res[i] = c_calculation(x,y);
    }

    for(int i = 0; i < 5; i++)
    {
        if (input[i] == res[i])
        {
            cout << "PASSED" << endl;
        }
        else
        {
            cout << "FAILED" << endl;
        }
    }



    return 0;
}
