#include <cmath>
#include <windows.h>
#include <iostream>
#include <bitset>
using namespace std;


double c_calculation(double x, double y)
{
    double S;
        S = pow(x, 2) - pow(y, 3) + sqrt(pow(y, x) - M_PI);
    return S;
}


float Deposite(float dep, short strok)
{
    float month, a;

    if(strok == 6)
    {
        a = (dep*16)/100;
        month = a/6;
    }
    if (strok == 12)
    {
        a = (dep*18)/100;
        month = a/12;
    }
    return month;
}

short Bolfort(float jan[])
{
    short sz = 31;
    float bolfort[sz];
    short maximum = 0;
    for (int i = 0; i < sz; i++)
    {
        if (jan[i] < 0.3)
        {
            bolfort[i] = 0;
            continue;
        }
        if ((jan[i] > 0.3) && (jan[i] < 1.5))
            {
                bolfort[i] = 1;
                continue;
            }
        if  ((jan[i] > 1.6) && (jan[i] < 3.4))
            {
                bolfort[i] = 2;
                continue;
            }
        if  ((jan[i] > 3.5) && (jan[i] < 5.4))
            {
                bolfort[i] = 3;
                continue;
            }
        if  ((jan[i] > 5.5) && (jan[i] < 7.9))
           {
                bolfort[i] = 4;
                continue;
            }
        if  ((jan[i] > 8.0) && (jan[i] < 10.7))
            {
                bolfort[i] = 5;
                continue;
            }
        if  ((jan[i] > 10.8) && (jan[i] < 13.8))
            {
                bolfort[i] = 6;
                continue;
            }
        if  ((jan[i] > 13.9) && (jan[i] < 17.1))
            {

                bolfort[i] = 7;
                continue;
            }
        if  ((jan[i] > 17.2) && (jan[i] < 20.7))
            {
                bolfort[i] = 8;
                continue;
            }
        if  ((jan[i] > 20.8) && (jan[i] < 24.4))
            {
                bolfort[i] = 9;
                continue;
            }
        if  ((jan[i] > 24.5) && (jan[i] < 28.4))
            {
                bolfort[i] = 10;
                continue;
            }
        if  ((jan[i] > 28.5) && (jan[i] < 32.6))
            {
                bolfort[i] = 11;
                continue;
            }
        if (jan[i] >= 32.7)
            {
                bolfort[i] = 12;
                continue;
            }
    }
    for(int i = 0; i < sz; i++)
    {
        if(maximum < bolfort[i])
            maximum = bolfort[i];
    }
    return maximum;
}

int BitNumber(int num)
{
    bitset<32> b_number(num);
    if(b_number[13])
    {
        return b_number.count();
    }
    return 32 - b_number.count();
}
