#include <iostream>
#include "ModulesIvanov.h"
#include <locale>
#include <locale.h>
#include <windows.h>
using namespace std;


void Greeting()
{
    cout << "|====================|" << endl
         << "|Max Ivanov ";
    wcout << L"\x00A9  |";
    cout << endl
         << "|====================|" << endl;
}

void Inequality(char a, char b)
{
    if (a+1 >= b)
        cout << "a+1 >= b is true" << endl;
    else
        cout << "a+1 >= b is false" << endl;
}

double Change(int value)
{
   int k = 1, b = 0;
    while (value)
    {
        b += value%16*k;
        value/=16;
        k*=10;
    }
    return b;
}

void ChangeOut(int val)
{
    cout << val << "x10: " << val << "   " << val << "x16: 0" << Change(val) << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x, y, z;
    char a, b;
    cout << "”вед≥ть x: ";
    cin >> x;
    cout << "”вед≥ть y: ";
    cin >> y;
    cout << "”вед≥ть z: ";
    cin >> z;
    cout << "”вед≥ть a: ";
    cin >> a;
    cout << "”вед≥ть b: ";
    cin >> b;
    Greetings();
    Inequality(a,b);
    ChangeOut(x);
    ChangeOut(y);
    ChangeOut(z);
    return 0;
}
