/**************************************************************************
 * Customer Class
 *  This is the customer class. This file includes the method names and 
 *  method definitions. This class will hold the customer information 
 *  including their name, address, city, state, zip code, interest level in
 *  in the product, and level of desire for the product.
 *  Anything else that needs to be added can be added by anyone.
 *
 *************************************************************************/

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
using namespace std;

class Customer
{
	public:
	Customer();                                     //Customer constructor
	~Customer();                                    //Customer deconstructor
	void SetCustomerName(string customName);        //Sets the customer's name
	void SetCustomerAddress(string customAddress);  //Sets the customer's address
	void SetCustomerCity(string customCity);        //Sets the customer's city
	void SetCustomerState(string customState);      //Sets the customer's state
	void SetCustomerZip(int customZip);             //Sets the customer's zip code
	void SetInterest(string customInterest);        //Sets the customer's interest level
	void SetDesire(string customDesire);            //Sets the customer's level of desire

	void ChangeCustomerName(string customName);       //Changes the customer's name
	void ChangeCustomerAddress(string customAddress); //Changes the customer's address
	void ChangeCustomerCity(string customCity);       //Changes the customer's city
	void ChangeCustomerState(string customState);     //Changes the customer's state
	void ChangeCustomerZip(int customZip);            //Changes the customer's zip code
	void ChangeInterest(string customInterest);       //Changes the customer's interest level
	void ChangeDesire(string customDesire);           //Chagnes the customer's level of desire

	string GetCustomerName();     //Gets the customer's name
	string GetCustomerAddress();  //Gets the customer's address
	string GetCustomerCity();     //Gets the customer's city
	string GetCustomerState();    //Gets the customer's state
	int GetCustomerZip();         //Gets the customer's zip code
	string GetInterest();         //Gets the customer's interest level
	string GetDesire();           //Gets the customer's level of desire

	bool RecievedBrochure();      //Checks to see if the customer received their brochure or not

	private:
	string name;      //Customer name
	string address;   //Customer address
	string city;      //Customer city
	string state;     //Customer state
	int zip;          //Customer zip code
	string interest;  //Customer level of interest
	string desire;    //Customer level of desire
	char brochure;    //Whether or not the customer got a brochure.
};

#endif /* CUSTOMER_H_ */
