#include <iostream>
#include <string>
#include <fstream>
#include "header.h"
using namespace std;

void RemoveUser(string fileName)
{
    ifstream iFile;
    ofstream oFile;
    string name;
    string store;
    string user;
    string password;
    bool found = false;

    iFile.open("file1.txt");
    oFile.open ("file1.txt", ofstream::out | ofstream::app);

    cout << "Who would you like to remove?: ";
    cin >> name;

    do
    {
            iFile >> store;

            if(name == store)
            {
                    oFile << 'x';
                    cout << name << "Deleted from the system\n";
                    found = true;
            }

    }while(iFile and !found);


    if(found == false)
    {
            cout << "Username Not Found\n\n";
    }

}

