/**************************************************************************
 * Customer Class Methods Source file
 *  Method definitions for the methods int the customer class
 *************************************************************************/

#include "Customer.h"

Customer::Customer(){
	name = '\0';
	address = '\0';
	city = '\0';
	state = '\0';
	zip = 0;
	interest = '\0';
	desire = '\0';
	brochure = ' ';
}

Customer::~Customer(){

}

void Customer::SetCustomerName(string customName){
	name = customName;
}

void Customer::SetCustomerAddress(string customAddress){
	address = customAddress;
}

void Customer::SetCustomerCity(string customCity){
	city = customCity;
}

void Customer::SetCustomerState(string customState){
	state = customState;
}

void Customer::SetCustomerZip(int customZip){
	zip = customZip;
}

void Customer::SetInterest(string customInterest){
	interest = customInterest;
}

void Customer::SetDesire(string customDesire){
	desire = customDesire;
}

void Customer::SetBrochure(char customBrochure){
        brochure = customBrochure;
}



void Customer::ChangeCustomerName(string customName){
	SetCustomerName(customName);
}

void Customer::ChangeCustomerAddress(string customAddress){
	SetCustomerAddress(customAddress);
}

void Customer::ChangeCustomerCity(string customCity){
	SetCustomerCity(customCity);
}

void Customer::ChangeCustomerState(string customState){
	SetCustomerState(customState);
}

void Customer::ChangeCustomerZip(int customZip){
	SetCustomerZip(customZip);
}

void Customer::ChangeInterest(string customInterest){
	SetInterest(customInterest);
}

void Customer::ChangeDesire(string customDesire){
	SetDesire(customDesire);
}

void Customer::ChangeBrochure(char customBrochure){
    SetBrochure(customBrochure);
}

string Customer::GetCustomerName(){
	return name;
}

string Customer::GetCustomerAddress(){
	return address;
}

string Customer::GetCustomerCity(){
	return city;
}

string Customer::GetCustomerState(){
	return state;
}

int Customer::GetCustomerZip(){
	return zip;
}

string Customer::GetInterest(){
	return interest;
}

string Customer::GetDesire(){
	return desire;
}

char Customer::GetBrochure(){
    return brochure;
}


bool Customer::RecievedBrochure(){
	return(brochure == 'Y');
}
