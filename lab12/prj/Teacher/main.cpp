#include <iostream>

#include "ModulesIvanov.h"
#include "Functions.h"
#include <cmath>

using namespace std;


int main()
{
    system("chcp 1251 & cls");
    ClassLab12_Ivanov coin;
    char examples[] = "../../TestSuite/TestExamples.txt";
    char * pExamples = examples;
    char results[] = "../../TestSuite/TestResults.txt";
    char *pResults = results;

    if (fileOnPlace(pResults) == false) { return 1; }
    if (filesIsOpen(pResults, pExamples) == false) { return 2; }

    string buffer;
    ofstream resOut(pResults, ios::app);
    if (resOut.is_open()) {
        ifstream resTest(pExamples);
        if (resTest.is_open()) {
            bool newLine = true;
            resOut << "+" << setw(34) << left << setfill('-') << "" << setw(45)
                   << "area" << "+" << endl << setfill(' ');
            for (int i = 0, j = 0; resTest.tellg() != -1; i++) {
                if (newLine) {
                    resOut << "|TC_" << left << setw(2) << j+1 << "|";
                    newLine = false;
                }
                getline(resTest, buffer);
                buffer = buffer.erase(0, 7);
                cout << stod(buffer) << endl;
                switch (i%3) {
                case 0:
                    resOut << "l - " << setw(8) << buffer;
                    coin.setLength(stod(buffer));
                    break;
                case 1:
                    resOut << "w - " << setw(8) << buffer;
                    coin.setWidth(stod(buffer));
                    break;
                case 2:
                    resOut << "|area - " << setw(11) << coin.area();
                    resOut << resetiosflags(ios::left);
                    cout << (int)(coin.area()*1000) << " | " << (int)(stod(buffer)*1000) << endl;
                    if(((int)(coin.area()*1000)) == (int)(stod(buffer)*1000))
                    {
                        resOut << "Passed" << endl;
                    }
                    else
                        resOut << "Failed" << endl;

                    newLine = true;
                    j++;
                }
            }
            resOut << "+" << setw(80) << setfill('-') << "+" << endl << setfill(' ');
            resTest.close();
        }
        else {
            cout << "Помилка при роботі з файлом " << pExamples << "." << endl;
        }
        resOut.close();
    }
    else {
        cout << "Помилка при роботі з файлом " << pResults << "." << endl;
    }

    return 0;
}
