#include <iostream>
#include <string>
#include "header.h"
using namespace std;

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
        case 8: RequestBrochure();
            break;
        case 10 : ReadFile("contactUs.txt");
            break;
        case 11 : PrintBrochure();
            break;
        case 12: WelcomeMenu();
            break;
        
       	default : cout << "Error, Incorrect Input!\n";
	}
		
	cout << MenuFuncOne();
	cin >> choice;
	// cin.ignore(1000,'\n');
		
	}
}
