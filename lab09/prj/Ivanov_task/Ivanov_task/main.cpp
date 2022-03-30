#include <iostream>
#include "ModulesIvanov.h"

using namespace std;
void menu()
{
    cout << "========== Menu ==========" << endl
         << "| k - s_calculation      |" << endl
         << "| h - task 9.1(Deposite) |" << endl
         << "| g - task 9.2(Bolfort)  |" << endl
         << "| f - task 9.3(BitNumber)|" << endl
         << "| c, d(D) - exit         |" << endl
         << "| m - menu               |" << endl
         << "==========================" << endl << endl;

}

void s_calcFunc()
{
    cout << "=====================================" << endl
         << "Function s_calculation starts running" << endl
         << "=====================================" << endl;
    double x, y, z;
            cout << "Enter x: ";
            cin >> x;
            cout << "Enter y: ";
            cin >> y;
            cout << "Enter z: ";
            cin >> z;
            cout << c_calculation(x, y) << endl;
    cout << "=======================================" << endl
         << "Function s_calculation finished running" << endl
         << "=======================================" << endl << endl;
}

void DepFunc()
{
    cout << "================================" << endl
         << "Function Deposite starts running" << endl
         << "================================" << endl;
         float dep, strok;
    cout << "Enter a sum of deposite: ";
    cin >> dep;
    cout << "Enter a strok of deposite: ";
    cin >> strok;
    cout << "You will have " << Deposite(dep, strok) << " uan per month" << endl;
    cout << "==================================" << endl
         << "Function Deposite finished running" << endl
         << "==================================" << endl << endl;
}


void BolfFinc()
{
    cout << "===============================" << endl
         << "Function Bolfort starts running" << endl
         << "===============================" << endl;
    cout << "Enter mid-day wind`s speed value for January: " << endl;
    float january[31];
    for(int i = 0; i < 31; i++)
    {
        cin >> january[i];
    }
    cout <<  Bolfort(january) << endl;
    cout << "=================================" << endl
         << "Function Bolfort finished running" << endl
         << "=================================" << endl << endl;
}


void BitFunc()
{
    cout << "=================================" << endl
         << "Function BitNumber starts running" << endl
         << "=================================" << endl;
         int num;
    cout << "Enter a number (0 - 9008000): " << endl;
    cin >>num;
    cout << BitNumber(num) << endl;
    cout << "===================================" << endl
         << "Function BitNumber finished running" << endl
         << "===================================" << endl << endl;
}

int main()
{
    char symbol = 'm';
    while (1)
    {
       if (symbol == 'm')
            menu();
        if (symbol == 'c')
            break;
        if (symbol == 'd')
            break;
        if (symbol == 'D')
            break;
        if (symbol == 'k')
            s_calcFunc();
        if (symbol == 'g')
            BolfFinc();
        if (symbol == 'h')
            DepFunc();
        if (symbol == 'f')
            BitFunc();

        cout << "Press a key: ";
        cin >> symbol;
    }
    return 0;
}
