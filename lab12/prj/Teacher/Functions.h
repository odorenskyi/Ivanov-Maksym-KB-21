#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include "ModulesIvanov.h"
#include <cmath>
#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

bool fileOnPlace(char * writeFile)
{
    string cpp = __FILE__;
    size_t found = cpp.find("\\lab12\\prj");

    if (found == -1)
    {
        fstream file(writeFile, ios::out);
        file << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
        for (int i = 0; i < 100; i++) {
            cout << "\a";
        }
        file.close();
        return false;
    }
    return true;
}

bool filesIsOpen(char * writeName, char * readName)
{
    fstream wFile(writeName, ios::out);
    fstream rFile(readName, ios::in);
    if (rFile.is_open() == false || wFile.is_open() == false)
    {
        fstream file("TestReuslts.txt", ios::out);
        file << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
        file.close();
        return false;
    }
    return true;
}

void Results(char * readName, ClassLab12_Ivanov coin, string outArea, string expArea, int index)
{
    fstream resFile(readName, ios::app);
    resFile << "----------------------------------------------------" << endl;
    resFile << "| TEST CASE " << index << "|" << endl;
    resFile << "| Coin length: " << coin.getLength() << " мм   |" << endl;
    resFile << "| Coin width: " << coin.getWidth() << " мм   |" << endl;
    resFile << "| Coin area: "  << outArea << " мм^2 |" << endl;
    resFile << "| Coin area(expected): " << expArea << " мм^2 |" << endl;
    resFile << "| TEST CASE RESULT" << boolalpha << (expArea.compare(outArea) == 0) << "     |" << endl;
    resFile << "----------------------------------------------------" << endl;
}

#endif // FUNCTIONS_H_INCLUDED
