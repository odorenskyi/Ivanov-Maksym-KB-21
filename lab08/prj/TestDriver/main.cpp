#include <iostream>
#include <iomanip>
#include <cmath>
#include "ModulesIvanov.h"
using namespace std;

int main()
{

    double input[5][2] = {5,    3,
                          6,    2,
                          3,    5,
                          7,    2,
                          6,    3};

    double result[5] = {13.487363,
                        35.801180,
                        -104.961050,
                        52.174006,
                        35.941760};


    for (int i = 0; i < 5; i++) {
        cout << resetiosflags(ios::fixed) << "TC_" << setfill('0') << setw(2) << i+1 << ":|" << setfill(' ');
        cout << "x = " << setw(5) << left << input[i][0];
        cout << "y = " << setw(5) << left << input[i][1];
        cout << fixed << "| - result: " << setw(10) << c_calculation(input[i][0], input[i][1]);
        cout << left << " - " << ((round(c_calculation(input[i][0], input[i][1])*1000000)/1000000.0 == result[i]) ? "passed" : "failed") << endl;
    }


    return 0;
}
