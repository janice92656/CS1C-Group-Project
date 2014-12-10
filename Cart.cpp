#include <iostream>
#include "header.h"
using namespace std;

void Cart(int total)
{
    int orderChoice;
    char confirm;
    
    ReadFile("orderMenu.txt");
    cout << "Please choose from the menu above. (Enter -1 to cancel your order and return to last menu): \n";
    cin >> orderChoice;
    while(orderChoice > 0)
    {
	switch (orderChoice)
    	{
        case 1 : cout << "You chose the Peeper for $2,500.";
            cout << "\nPress 'y' to confirm your order.";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
            {
                cout << "\nItem added to cart. Please choose another item.";
                total += 2500;
                Cart(total);
            }
            else 
            {
                cout << "Item canceled.";
                Cart(total);
            }
            break;
        case 2 : cout << "You chose the Transporter for $5,000.";
            cout << "\nPress 'y' to confirm your order.";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
            {
                cout << "\nItem added to cart. Please choose another item.";
                total += 5000;
                Cart(total);
            }
            else 
            {
                cout << "Item canceled.";
                Cart(total);
            }
            break;
        case 3 : cout << "You chose the Obliterator for $10,000.";
            cout << "\nPress 'y' to confirm your order.";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
            {
                cout << "\nItem added to cart. Please choose another item.";
                total += 10000;
                Cart(total);
            }
            else 
            {
                cout << "Item canceled.";
                Cart(total);
            }
            break;
            
        case 4 : cout << "You chose the PhotoBomb Destroyer for $500.";
            cout << "\nPress 'y' to confirm your order.";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
            {
                cout << "\nItem added to cart. Please choose another item.";
                total += 500;
                Cart(total);
            }
            else 
            {
                cout << "Item canceled.";
                Cart(total);
            }
            break;
            
        case 5 : cout << "You chose the Standard Maintenance Plan for $750.";
            cout << "\nPress 'y' to confirm your order.";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
            {
                cout << "\nItem added to cart. Please choose another item.";
                total += 750;
                Cart(total);
            }
            else 
            {
                cout << "Item canceled.";
                Cart(total);
            }
            break;
        
        case 6 : cout << "You chose the Advanced Maintenance Plan for $1,750.";
            cout << "\nPress 'y' to confirm your order.";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
            {
                cout << "\nItem added to cart. Please choose another item.";
                total += 1750;
                Cart(total);
            }
            else 
            {
                cout << "Item canceled.";
                Cart(total);
            }
            break;
        case 7: cout << "Your total order amount is " << total;
            CustomerMenu();
            break;
        default : cout << "Error, Incorrect Input!\n";
	}
        cout << "\nOrder Canceled!";
        CustomerMenu(); 
    }
}
