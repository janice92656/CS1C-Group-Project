/****************************************************************
* AUTHORS		: Janice Wallace, Kyle Serio, Matthew Regueiro, Seth Tyler
* ASSIGNMENT            : Class Project 
* CLASS			: CS1C
* SECTION		: TTh: 6-7:30pm
* DUE DATE:		: December 9, 2014
****************************************************************/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

 void ReadFile (string fileName);
 string MenuFuncOne();
 string MaintenanceFunc();
 void CustomerMenu();
 void EmployeeMenu();

int main()
{
    int choice;
    ReadFile("welcome.txt");
    cin >> choice;
    switch(choice)
        {
          case 1: CustomerMenu();
              break;
          case 2: EmployeeMenu();
              break;
          case 0: return 0;
              break;
          default: cout << "\nError, Incorrect Input!";
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
string menuSegment = "\nCUSTOMER MENU"
        "\n1 - Selling Points"
	"\n2 - Environments Supported"
	"\n3 - Concept of operations"
	"\n4 - Guarantee Policy"
	"\n5 - Options and Pricing"
	"\n6 - Logistics and Maintenance"
	"\n7 - Customer Testimonials"
        "\n8 - Request a brochure"
        "\n  - Enter a negative number to exit.";
return menuSegment;
}

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

string MaintenanceFunc()
{
	return
    "\n"
        "\n******************************************************************"
        "\n* Maintenance and Logistics"
	"\n* Disarming bombs is dangerous work even for robots, and sooner   "
	"\n* or later they are going to need repair. In response IRobot      "
	"\n* offers the following maintenance options:                       "
	"\n*                                                                 "
	"\n* Standard: $750 per/month.                                       "
	"\n* The standard maintenance plan offers comprehensive service      "
	"\n* from our skilled technicians, 24-hours a day, 365 days a year."
	"\n*                                                                 "
	"\n* Advanced: $1750 per/month.                                      "
	"\n* The advanced plan offers the same comprehensive service as the  "
	"\n* standard plan, but with priority service and the option to      "
	"\n* replace the robot until the maintenance is complete.            "
	"\n*                                                                 "
	"\n* Branch Locations/Hours:                                         "
	"\n*                                                                 "
    "\n* Silicon Valley, CA     6:00a - 10:00p                          "
    "\n*                                                                 "
	"\n* Houston, TX            7:00a - 10:30p                                   "
	"\n*                                                                 "
	"\n* Phoenix, AZ            6:30a - 11:00p                                   "
	"\n*                                                                 "
	"\n* Seattle, WA            5:00a - 9:30p                                    "
	"\n* 																 "
	"\n* Detroit, MI            5:30a - 10:00p                                   "
	"\n*                                                                 "
	"\n******************************************************************"
        "\n";
}

void CustomerMenu()
{
    int choice;
    cout << endl;
    cout << MenuFuncOne();
    cin >> choice;
    // cin.ignore(1000,'\n');
	
    while(choice > 0)
    {
	switch (choice)
    	{
        case 1 : ReadFile("Key Selling Points.txt");
            break;
        case 2 : ReadFile("terrain.txt");
            break;
        case 3 : ReadFile("operations.txt");        
            break;
        case 4 : ReadFile("guarantee.txt");       
            break;
	case 5 : ReadFile("pricing.txt");
            break;
	case 6 : cout << MaintenanceFunc();
            break;
        case 7: ReadFile("testimonials.txt");
            break;
        case 8: cout << "Thank you for requesting a brochure.";
            break;
       	default : cout << "Error, Incorrect Input!\n";
	}
		
	cout << MenuFuncOne();
	cin >> choice;
	// cin.ignore(1000,'\n');
		
	}
}

void EmployeeMenu()
{
    cout << "\nNo code for employee login.";
}
