//Chapter 2 Lab 2 Task 3
//Summary: Implemented decision making structures
//Input: double fuelGageReading
//Output: String message
#include <iostream>
using namespace std;

int main()
{
    double fuelGageReading;

    cout << "Enter fuel gage reading: ";
    cin >> fuelGageReading; //input

    cout << "First with braces:\n";
    if (fuelGageReading < 0.75)  
    {
        if (fuelGageReading < 0.25)//maybe
            cout << "Fuel very low. Caution!\n";
    }   
    else 
    {
        cout << "Fuel over 3/4. Don't stop now!\n";
    }

    cout << "Now without braces: \n";
    if(fuelGageReading < 0.75)
    {
        if(fuelGageReading < 0.25)
            cout << "Fuel very low. Caution!\n";
    }
    else    
        cout << "Fuel over 3/4. Don't stop now!\n";
    
    return 0;
}