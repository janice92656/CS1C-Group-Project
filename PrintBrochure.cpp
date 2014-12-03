#include <iostream>
#include <string>
#include <fstream>
#include "header.h"
using namespace std;

void PrintBrochure()
{
    ReadFile("Key Selling Points.txt");
    ReadFile("terrain.txt");
    ReadFile("operations.txt");
    ReadFile("guarantee.txt"); 
    ReadFile("pricing.txt");
    cout << MaintenanceFunc();
    ReadFile("testimonials.txt");
    ReadFile("contactUs.txt");
    
}
