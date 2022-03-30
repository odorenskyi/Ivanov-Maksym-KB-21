#include <iostream>
#include <iomanip>
#include <ModulesIvanov.h>

using namespace std;

int main()
{
     cout << "\t|Max Ivanov test task 9.1|" << endl;
   double input[3][2] = {1000,    6,
                         1000,    12,
                         2500,    12};

    double result[3] = {26.666666,
                        15,
                        37.5};

    for (int i = 0; i < 3; i++)
    {
        cout << resetiosflags(ios::fixed) << "TC_" << i+1 << ":|" << setfill(' ');
        cout << "Deposite = " << setw(3) << left << input[i][0];
        cout << " Strok = " << setw(3) << left << input[i][1];
        cout << fixed << "| - result: " << setw(10) << Deposite(input[i][0], input[i][1]);
        cout << left << " - " << ((round(Deposite(input[i][0], input[i][1])*1000000)/1000000.0 == result[i]) ? "passed" : "failed") << endl;
    }


    cout << "\t|Max Ivanov test task 9.2|" << endl;

    float in[31][3] = {0,   3,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        2.3,   3,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        0,   3,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        0,   3,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        0,   3,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        0,   3,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        0,   3,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        0,   3,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        0,   3,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        0,   3,   1,
                        0.2, 0.1, 3,
                        0.5, 3.2, 1.5,
                        0.655, 2.5555, 6.1555};

    short expected[3] {1, 2, 4};
    for(int i = 0; i < 3; i++)
    {
        float test[31];
        for(int t = 0; t < 31; t++)
        {
            test[i] = in[t][i];
        }
        if (expected[i] == Bolfort(test))
        {
            cout << resetiosflags(ios::fixed) << "TC_" << i+1 << ":|" << setfill(' ');
            cout << expected[i] << " = " << Bolfort(test) << " : passed" << endl;
        }
        else
        {
            cout << resetiosflags(ios::fixed) << "TC_" << i+1 << ":|" << setfill(' ');
            cout << expected[i] << " = " << Bolfort(test) << " : failed" << endl;
        }

    }

    cout << "\t|Max Ivanov test task 9.3|" << endl;
    int inp[3] {123456, 654321, 8653752};
    int outp[3] {6, 14, 23};
    for (int i = 0; i < 3; i ++)
    {
        if (BitNumber(inp[i]) == outp[i])
        {

            cout << resetiosflags(ios::fixed) << "TC_" << i+1 << ":|" << setfill(' ');
            cout << BitNumber(inp[i]) << " = " << outp[i] << ": passed" << endl;
        }
        else
        {

            cout << resetiosflags(ios::fixed) << "TC_" << i+1 << ":|" << setfill(' ');
            cout << BitNumber(inp[i]) << " = " << outp[i] << ": failed" << endl;
        }
    }
    return 0;
}


