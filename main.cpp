/****************************************************************
* AUTHOR		: Janice Wallace, Kyle Serio, Matt, Seth Tyler
* ASSIGNMENT            : Class Project 
* CLASS			: CS1C
* SECTION		: TTh: 6-7:30pm
* DUE DATE:		: December 9, 2014
****************************************************************/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// void readFromFile(string& fileName);
void readPricing();

int main()
{
	cout << "Programmed by	: Janice Wallace, Kyle Serio, Seth Tyler, Matt \n";
	cout << "CS1B		: TTh 6-7:30 pm\n";
	cout << "Assignment	: Class Project\n\n";
        string fileName;
        readPricing();
        fileName = "pricing.txt";
        // readFromFile(fileName);
	return 0;
}

void readPricing()
{
    string nextLine;
    ifstream inData("pricing.txt");
    if (inData.is_open())
    {
        while (getline(inData, nextLine))
            cout << nextLine << endl;
    }
    else
        cout << "Unable to open file.";
    inData.close();
}

/*
void readFromFile(string& fileName)
{
    cout << "readFromFile called.";
    string nextLine;
    ifstream inData(fileName);
    if (inData.is_open())
    {
        while (getline(inData, nextLine))
            cout << nextLine << endl;
    }
    else
        cout << "Unable to open file.";
    inData.close();
}
*/
