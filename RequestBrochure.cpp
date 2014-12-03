
/***********************************************************
 * Request Brochures
 *  This is a simple function that will as the customers if
 *  they would like to request a brochure. If they say no,
 *  the program will acknowledge that they did not want a
 *  brochure. If the customer says they want a brochure
 *  the program will acknowledge their request and will
 *  update the customer list to show that the customer has
 *  requested that a brochure be sent to them.
 **********************************************************/

#include <iostream>
#include <string>
#include <ios>
#include <limits>
#include "header.h"
using namespace std;

void RequestBrochure(){
	string companyName;
        char response;
        
        cout << "Enter Company Name: ";
        cin >> companyName;
        // cin.getline(companyName, 100);
        // getline(cin, companyName);
        /*
         */


//After the company name has been entered it should be compared to the company names in the 
//customer list.
//This loop should not run if the customer's Company name cannot be found on the customer list.
//If the Company Name is found in the list, the loop will run
	do{
		cout << "\nAre you sure you would like to request a brochure(Y/N)? ";
		// cin.get(response);
                cin >> response;

		if(toupper(response) == 'Y'){

                    cout << "Thank You. Your request for a brochure has been "
					"acknowledged.";
                    cout << endl;
                    //Once the customer has said yes the list should update to show that the customer has
                    //requested a brochure.
		}
		else if(toupper(response) == 'N'){
			cout << "Your request for a brochure has not been acknowledged.";
			cout << endl;
			//If the customer says no, the program should return back to the customer menu.
		}
		else if(toupper(response) != 'Y' || toupper(response) != 'N'){
			cout << "Please enter either 'Y' or 'N' for 'Yes' or 'No'.\n";
		}
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
	}while(toupper(response) != 'Y' && toupper(response) != 'N');
}
