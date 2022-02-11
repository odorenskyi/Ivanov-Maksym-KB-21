#include <iostream>
#include <cmath>
#include "ModulesIvanov.h"
using namespace std;

int main()
{
    double x, y, z, res;
    int i = 1;
    while(i == 1)
    {
    cout << "Enter x:";
    cin >> x;
    cout << "Enter y:";
    cin >> y;
    cout << "Enter z:";
    cin >> z;
    cout << "Enter res:";
    cin >> res;
    cout << c_calculation(x, y) << endl;
    if (c_calculation(x, y) != res)
    {
        cout << "FAILED" << endl;
    }
    else
    {
        cout << "PASSED" << endl;
    }
    cout << "Enter i:";
    cin >> i;
    }
    return 0;
}
