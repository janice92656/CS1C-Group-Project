#include <iostream>
#include <string>
using namespace std;


///************************************************************************
//* MenuFuncOne
//* This function returns the first segment of the programs menu
//* PRE-CONDITIONS
// - NONE -
//* POST- CONDITIONS
//* menuSegment: The segment is stored and returned here.
//* - RETURNS -> The menu segment.
//*************************************************************************/
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
        "\n1  - Selling Points"
	"\n2  - Environments Supported"
	"\n3  - Concept of operations"
	"\n4  - Guarantee Policy"
	"\n5  - Options and Pricing"
	"\n6  - Logistics and Maintenance"
	"\n7  - Customer Testimonials"
        "\n8  - Request a brochure"
        "\n9  - Shopping Cart"
        "\n10 - Contact Us"
        "\n11 - Display Entire Brochure"
        "\n12 - Return to Home Page"
        "\n   - Enter a negative number to exit.";
return menuSegment;
}
