#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void ReadFile(string fileName)
{
    ifstream iFile;
    string store;
    iFile.open(fileName.c_str());
    cout << endl << endl;
    while(iFile)
    {
        while (getline(iFile, store))
            cout << store << endl;
    }
    iFile.close();  
}
