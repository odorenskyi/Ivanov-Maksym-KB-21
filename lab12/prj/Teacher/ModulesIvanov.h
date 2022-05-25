#ifndef MODULESIVANOV_H_INCLUDED
#define MODULESIVANOV_H_INCLUDED

#include <cmath>
#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <regex>

using namespace std;

class ClassLab12_Ivanov
{
public:
    double area();

    void setWidth(double wid);
    void setLength(double len);

    double getWidth(){return width;}
    double getLength(){return length;}

    ClassLab12_Ivanov(double a, double b);
    ClassLab12_Ivanov();

private:
    double width, length;
};


double ClassLab12_Ivanov::area()
{
    return M_PI * width * length;
}

ClassLab12_Ivanov::ClassLab12_Ivanov(double a, double b)
{
    width = a;
    length = b;
}
ClassLab12_Ivanov::ClassLab12_Ivanov()
{
    width = 39.0;
    length = 29.2;
}


void ClassLab12_Ivanov::setWidth(double wid)
{
    if(wid < 0) { wid = 0;}
    width = wid;
}

void ClassLab12_Ivanov::setLength(double len)
{
    if(len < 0) { len = 0;}
    length = len;
}
#endif // MODULESIVANOV_H_INCLUDED
