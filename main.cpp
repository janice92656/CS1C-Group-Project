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
void readGuarantee();

int main()
{
	cout << "Programmed by	: Janice Wallace, Kyle Serio, Seth Tyler, Matt \n";
	cout << "CS1B		: TTh 6-7:30 pm\n";
	cout << "Assignment	: Class Project\n\n";
        
        readPricing();      //  These two function calls will be part of the 
        cout << endl;
        readGuarantee();    // menu once it is created
        
        
        // string fileName;
        // fileName = "pricing.txt";
        // readFromFile(fileName);
        // readFromFile("pricing.txt");
        
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

void readGuarantee()
{
    string nextLine;
    ifstream inData("guarantee.txt");
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
