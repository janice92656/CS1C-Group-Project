#include <iostream>
#include "header.h"
using namespace std;

int WelcomeMenu()
{
    int choice;
    bool valid = false;
    int index = 0;
    
    ReadFile("welcome.txt");
    cin >> choice;
    while(choice != 0)
    {
        switch(choice)
            {
              case 1: CustomerMenu();
                  break;
              case 2: 

                while(index < 3 and valid == false)
                {
                    try
                    {
                      valid = LogIn();  
                    }
                    catch(int e)
                    {
                      cout << "\nINCORRECT PASSWORD: LOG IN FAILED\n";  
                    }
                    catch(char u)
                    {
                        cout << "\nUsername Not Found\n\n";
                    }
                    
                    if(valid != true)
                    {
                        index++;

                        cout << index << " tries used, " << 3 - index << " left\n";
                    }


                }



                if (valid == true)
                {
                   
                }
                else
                {
                   cout << "\nFailed Log In attempts, you have no more left\n"; 
                }

                  break;
              case 0: return 0;
                  break;
              default: cout << "\nError, Incorrect Input!";
        } 
    ReadFile("welcome.txt");
    cin >> choice;
    }
}
