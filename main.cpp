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

 void ReadFile (string fileName);
 string MenuFuncOne();

int main()
{
	cout << "Programmed by	: Janice Wallace, Kyle Serio, Seth Tyler, Matt Regueiro\n";
	cout << "CS1B		: TTh 6-7:30 pm\n";
	cout << "Assignment	: Class Project\n\n";
	
	int choice;
	
	cout << MenuFuncOne();
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
			case 5 : ReadFile("Testimonies.txt");
			break;
			default : cout << "Error, Incorrect Input!\n";
			
		}
		
	cout << MenuFuncOne();
	cin >> choice;
	cin.ignore(1000,'\n');
		
	}
        
	return 0;
}

+///************************************************************************
+//* MenuFuncOne
+//* This function returns the first segment of the programs menu
+//* PRE-CONDITIONS
+// - NONE -
+//* POST- CONDITIONS
+//* menuSegment: The segment is stored and returned here.
+//* - RETURNS -> The menu segment.
+//*************************************************************************/
+string MenuFuncOne()
+{
+ string menuSegment = "\n1 - Selling Points"
	+ "\n2 - Environments Supported"
	+ "\n3 - Concept of operations"
	+ "\n4 - Guarantee Policy"
	+ "\n5 - Options and Pricing"
	+ "\n6 - Logistics and Maintenance"
	+ "\n7 - Customer Testimonies";
+ return menuSegment;
+}

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

