#include <iostream>
#include "header.h"


void EmployeeMenu()
{
    int index = 0;
    int choice = 0;
    
    
    ReadFile("employeeMenu.txt");
    cin >> choice;
    
    while (choice > 0)
    {
        switch (choice)
        {
            case 1 : ReadFile("customerList.txt");
                break;
            case 4 : AddUser("file1.txt");
                break;
            case 5 : RemoveUser("file1.txt");
                break;
            case 6 : WelcomeMenu();
                     
                break;
            default : cout << "Error, Incorrect Input!\n";
        }
    ReadFile("employeeMenu.txt");   
    cin >> choice;
    }
}
