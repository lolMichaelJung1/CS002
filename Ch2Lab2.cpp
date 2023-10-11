//Chapter 2 Lab 2
//Summary:Program that asks the user the number of hours worked
//and calculates paycheck using pay rate and overtime pay rate
//Input: number of hours worked
//Output: weekly paycheck
#include <iostream>

using namespace std;

int main()
{
    string name;
    int weeklyHours;
    double payRate, overTimePayRate, payCheck;
    cout << "Enter your name: "; //output
    cin >> name; //input
    cout << "How many hours did you work this week? "; //output
    cin >> weeklyHours; //input
    cout << "What is your hourly wage? "; //output
    cin >> payRate; //input

    overTimePayRate = payRate * 1.5; //processing

    if (weeklyHours > 40){ //payout if overtime
        payCheck = ((weeklyHours - 40) * payRate * 1.5) + (40 * payRate); 
    }
    else { //payout if no overtime
        payCheck = weeklyHours * payRate;
    }

    cout << fixed;
    cout.precision(2);
    cout << name << ", this week you worked " << weeklyHours << " hours and your paycheck is $" << payCheck;//output
    return 0;
}
