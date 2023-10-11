#include <iostream>
using namespace std;

int main()
{
    //declaring variables
    const int baseFee = 20.0;
    const double checkFee1= 0.2, checkFee2 = 0.1, checkFee3 = 0.05, checkFee4 = 0.03;
    double totalCost;
    int numChecks = 0;
    string bankName = "";
    // output and input 
    cout << "Enter the name of your bank: ";
    cin >> bankName;
    cout << "Enter the number of checks used this month: ";
    cin >> numChecks;

    //decision making structure
    if (numChecks >= 60){
        totalCost = baseFee + (numChecks * checkFee4);
    }
    else if (numChecks >=41){
        totalCost = baseFee + (numChecks * checkFee3);
    }
    else if (numChecks >= 20){
        totalCost = baseFee + (numChecks * checkFee2);
    }
    else {
        totalCost = baseFee + (numChecks * checkFee1);
    }
    //final output
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Bank name: " << bankName << endl;
    cout << "# of checks written: " << numChecks << endl;
    cout << "Your total cost: $" << totalCost;
} 
