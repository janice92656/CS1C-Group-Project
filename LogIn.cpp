#include "header.h"
#include <fstream>
#include <iostream>
using namespace std;
/******************************************************
// "file1" is the file holding names/pws
// stored simply as: name pw
//					         name pw
// 					         name pw

//used in main as LogIn();

//Needs the ADMIN ACCEPT to display the correct menu
******************************************************/

bool LogIn()
{
    ifstream iFile;
    string store;
    string user;
    string password;
    char u;
    int p;
    bool found = false;
    bool adminAccepted = false;

    iFile.open("file1.txt");

    while(iFile and found == false)
    {
	cout << "Enter Username: ";
	cin >> user;

	do
	{
            iFile >> store;

            if(store == user)
            {
            do
            {
		iFile >> store;

		cout << "Enter Password: ";
		cin >> password;

                if(password == store)
		{
                    adminAccepted = true;
                    cout << "ADMIN ACCEPTED\n";
                    EmployeeMenu();
                    found = true;
		}
                else
		{
                    
                    throw p;
		}

            }while(!found);
	}
            else
		{
                    iFile >> store;  
		}

	}while(iFile and !found);
	}

	if(!iFile)
	{
		
                throw u;
	}
    iFile.close();
    return adminAccepted;
}
