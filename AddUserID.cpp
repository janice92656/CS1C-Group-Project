#include <string>
#include <iostream>
#include <fstream>
#include "header.h"
using namespace std;

void AddUser(string fileName)
{
    ofstream oFile;
    string store;
    string name;
    string password;

    cout << "Please enter new Username: ";
    cin >> name;

    cout << "\nPlease enter new Password: ";
    cin >> password;

    oFile.open (fileName.c_str(), ofstream::out | ofstream::app);

    oFile << endl << name << " " << password;

    oFile.close();
}
