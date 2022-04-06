#include <iostream>
#include <string>
#include "ModulesIvanov.h"

using namespace std;

int main()
{
    system("chcp 1251 & cls");
    string input1[3] = {"Ukraine", "Привіт сесія", "Привіт, сусіде"};
    string expected1[3] = {"UKRAINE", "Привіт      ", "Привіт, сусіде"};
    cout << "====================================" << endl
         << "|Тестовий драйвер для завдання 10.1|" << endl
         << "====================================" << endl << endl;
    for(int i = 0; i < 3; i++)
    {
        if(addSmth("driver.txt", input1[i]) == expected1[i])
        {
            cout << "TC-" << i+1 << " passed\n" << endl;
        }
        else
            cout << "failed" << endl;
    }




    cout << "====================================" << endl
         << "|Тестовий драйвер для завдання 10.2|" << endl
         << "====================================" << endl << endl;
    string input2[3];
    for(int i = 0; i < 3; i++)
    {
        time_t s;
        s = time(NULL);
        if(PrintRule62("driver.txt") == (ctime(&s)))
        {
            cout << "TC-" << i+1 << " passed" << endl;
        }
        else
            cout << "TC-" << i+1 << " failed" << endl;
    }



    cout << "====================================" << endl
         << "|Тестовий драйвер для завдання 10.3|" << endl
         << "====================================" << endl << endl;
    int input3[3] {123456, 654565321, 228337};
    long expected3[3] {44, 44, 44};
    for(int i = 0; i < 3; i++)
    {
        if(CalcBin("driver.txt", 3,5,1, input3[i]) == expected3[i])
        {
            cout << "TC-" << i+1 << " passed" << endl;
        }
        else
            cout << "TC-" << i+1 << " failed" << endl;
    }
    return 0;
}
