#include "header.h"
******************************************************
// "file1" is the file holding names/pws
// stored simply as: name pw
//					         name pw
// 					         name pw

//used in main as LogIn();

//Needs the ADMIN ACCEPT to display the correct menu
******************************************************

void LogIn()
{
	ifstream iFile;
	string store;
	string user;
	string password;
	bool found = false;

	iFile.open("file1");

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
						//DISPLAY ADMIN MENU
						cout << "ADMIN ACCEPTED\n";
						found = true;
					}
					else
					{
						cout << "INCORRECT PASSWORD: LOG IN FAILED\n";
						found = true;
					}

				}while(!found);
			}
			else
			{
				iFile >> store;
				iFile.ignore(1000,'\n');
			}

		}while(iFile and !found);
	}

	if(found == false)
	{
		cout << "Username Not Found\n\n";
	}

}
