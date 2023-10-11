//Chapter 2 Lab 3 Task 3
//Summary: Asks user to input their body temp and compares it to 
//constant double NORMAL and prints a corresponding message
//Input: temperature today as a double
//Output: If the temperature is higher than var normal, tells user to rest
//or drink more fluids. Otherwise print they are healthy
#include <iostream>
using namespace std;

int main()
{
    const double NORMAL = 98.6;
    double tempToday;
    int y = 0;
    while (y < 3){ //while loop
        y++;
        cout << "Enter your temperature today: ";
    
        cin >> tempToday;
        if (tempToday > NORMAL){ //if else statement
            cout << "You are sick and should rest or drink more fluids\n";
        }
        else{
            cout << "You are healthy and can do whatever activity you want to do\n";
        }
    }
    return 0;
}