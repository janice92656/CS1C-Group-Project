/****************************************************************
* AUTHOR		: Janice Wallace, Kyle Serio, Matt, Seth Taylor
* ASSIGNMENT    : Class Project
* CLASS			: CS1C
* SECTION		: TTh: 6-7:30pm
* DUE DATE:		: December 9, 2014
****************************************************************/


#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <limits>
#include <ios>
using namespace std;

 void ReadFile (string fileName);
 string MenuFuncOne();
 string MaintenanceFunc();

int main()
{
	cout << "Programmed by	: Janice Wallace, Kyle Serio, Seth Taylor,"
			" Matt Regueiro\n";
	cout << "CS1C		    : TTh 6-7:30 pm\n";
	cout << "Assignment	    : Class Project\n\n";

	int choice;

	cout << endl << MenuFuncOne() << ": ";
	cin >> choice;
	cin.ignore(1000,'\n');

	while(choice > 0)
	{


		switch (choice)
		{
			case 1 : ReadFile("Terrain.txt");
			break;
			case 2 : ReadFile("Operations.txt");
			break;
			case 3 : ReadFile("Guarantee.txt");
			break;
			case 4 : ReadFile("Pricing.txt");
			break;
			case 5 : ReadFile("Logistics.txt");
			break;
			case 6 : cout << MaintenanceFunc();
			break;
			case 7 : ReadFile("Testimonies.txt");
			break;
			default : cout << "Error, Incorrect Input!\n";

		}

	cout << endl << MenuFuncOne() << ": ";
	cin >> choice;
	cin.ignore(1000,'\n');

	}

	return 0;
}

///************************************************************************
//* MenuFuncOne
//* This function returns the first segment of the programs menu
//* PRE-CONDITIONS
// - NONE -
//* POST- CONDITIONS
//* menuSegment: The segment is stored and returned here.
//* - RETURNS -> The menu segment.
//*************************************************************************/
string MenuFuncOne()
{
 string menuSegment = "\n0 - Exit"
		 	 	 	  "\n1 - Selling Points"
		 	 	 	  "\n2 - Environments Supported"
	                  "\n3 - Concept of operations"
		 	 	 	  "\n4 - Guarantee Policy"
	                  "\n5 - Options and Pricing"
		 	          "\n6 - Logistics and Maintenance"
	                  "\n7 - Customer Testimonies";
 return menuSegment;
}

void ReadFile(string fileName)
{
	ifstream iFile;
	string store;
	iFile.open(fileName.c_str());

	while(iFile)
	{
		iFile >> store;
		cout << store;
	}
	iFile.close();
}

/************************************************************************
* MaintenanceFunc
* 	This function returns the maintenance options available in string form
* PRE-CONDITIONS
*	- NONE -
* POST- CONDITIONS
*	maintainInfo: The maintenance information is stored here.
*	- RETURNS -> The maintenance information.
*************************************************************************/

string MaintenanceFunc()
{
	return
    "\n******************************************************************"
	"\n* Disarming bombs is dangerous work even for robots, and sooner   "
	"\n* or later they are going to need repair. In response IRobot      "
	"\n* offers the following maintenance options:                       "
	"\n*                                                                 "
	"\n* Standard: $750 per/month.                                       "
	"\n* The standard maintenance plan offers comprehensive service      "
	"\n* from our skilled techniciansâ€™ 24-hours a day, 364-days a year."
	"\n*                                                                 "
	"\n* Advanced: $1750 per/month.                                      "
	"\n* The advanced plan offers the same comprehensive service as the  "
	"\n* standard plan, but with priority service and the option to      "
	"\n* replace the robot until the maintenance is complete.            "
	"\n*                                                                 "
	"\n* Branch Locations/Hours:                                         "
	"\n*                                                                 "
    "\n* Silicon Valley, CA    6:00a â€“ 10:00p                          "
    "\n*                                                                 "
	"\n* Houston, TX    7:00a - 10:30p                                   "
	"\n*                                                                 "
	"\n* Phoenix, AZ    6:30a - 11:00p                                   "
	"\n*                                                                 "
	"\n* Seattle, WA    5:00a - 9:30p                                    "
	"\n* 																 "
	"\n* Detroit, MI    5:30a - 10:00p                                   "
	"\n*                                                                 "
	"\n******************************************************************";
}

/************************************************************************
* InputDoWhile(INT)
* 	This function allows an integer for input and error checks such
*	input.
* PRE-CONDITIONS
*	upperBound  : The integer input representing the max boundry.
*	lowerBound  : The integer input representing the min boundry.
*	prompt      : The prompt for the input must be defined.
*	inputWidth  : The max string length.
* POST-CONDITIONS
*	- RETURNS -> The input integer.
*************************************************************************/
int InputDoWhile(string prompt,
			     int upperBound,
			     int lowerBound)
{
	bool valid;			  // CALC - Determines if the integer input is
						  //		valid.
	ostringstream intStr; // CALC - The string stream version of the
						  //		integer input made into inputNum.
	ostringstream errorMsg1; // OUT - The first error message string.
	ostringstream errorMsg2; // OUT - The second error message string.
	long long inputNum;
	//Assign error message
	errorMsg2 << "**** Please input a number between " << lowerBound
			  << " and " << upperBound;

	// PROCESS: While input is invalid, ask the user for an integral
	//			input.
	do
	{
		//Formating - Justify left
		cout << left;
		// INPUT: Prompt the user for an integral input.
		cout << prompt;
		//Formating - Justify right
		cout << right;
		// PROCESS: If the input is not a number, output an error
		//			message telling the user that the input must
		//			be a number. Else, check if the number input
		//			falls into the accepted values.
		if(!(cin >> inputNum))
		{
			//OUT - Error message for char input
			cout << endl << errorMsg2.str() << " ****"
				 << endl << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			valid = false;
		}
		else
		{
			// PROCESS: Check if inputNum is invalid.
			valid = inputNum >= lowerBound && inputNum <= upperBound;

			// PROCESS: If inputNum is invalid, output an error message.
			if(!valid)
			{
				// OUTPUT: Place inputNum into the ostringstream intStr.
				intStr <<  inputNum;

				// OUTPUT: Output the message indicating inputNum was not
				//		   in the allowed range of numbers.
				errorMsg1 << "**** The number " << inputNum
						  << " is an invalid entry";
				cout << endl;
				// OUT - Adjust error message length relitave to
				//     which is longer.
				if(errorMsg1.str().size() > errorMsg2.str().size())
				{
					cout << errorMsg1.str() << " ****" << endl;
					cout << errorMsg2.str()
						 << setw(5 + (errorMsg1.str().size() -
								 errorMsg2.str().size()))
						 << " ****" << endl << endl;
				}
				else
				{
					cout << errorMsg1.str()
						 << setw(5 + (errorMsg2.str().size() -
								 errorMsg1.str().size()))
						 << " ****" << endl;
					cout << errorMsg2.str() << " ****"
						 << endl << endl;
				}//End - if(errorMsg1.str().size() > errorMsg2.str().size()
				// PROCESS: Clear the ostringstream intStr.
				intStr.str("");
				errorMsg1.str("");
			}
		}//End - if(!(cin >> inputNum))

	}while(!valid);
	// OUTPUT: Set output to be justified to the right.
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Formatting
	cout << endl;

	return inputNum;
}
