#include <iostream>
#include <cstring>
#include <limits>
#include <fstream>
#include <ios>
using namespace std;

void AddTestimonial()
{
    ofstream outData;
    outData.open("testimonials.txt", ios::app);
    string firstName;
    string lastName;
    string comments;
    cout << "Please enter your first name:";
    cin >> firstName;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Please enter your last name:";
    cin >> lastName;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Please enter your comments:";
    // cin >> comments;
    getline(cin, comments);
    

    outData << endl << endl << comments;
    outData << endl << "-\t" << firstName << " " << lastName;
    outData.close();
}
