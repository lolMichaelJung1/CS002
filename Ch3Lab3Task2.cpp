//Chapter 3 Lab 3 Task 2 
//Summary: Implemented 
//to output grade
//Input: Integer between 0-100
//Output: Character letter grade
#include <iostream>
using namespace std;

int main()
{
    int salary;
    int yearOnJob;

    cout << "Enter your salary:\n"; // output
    cin >> salary;
    cout << "Enter years on the job:\n"; // output
    cin >> yearOnJob;

    if (salary >= 40000){
        if(yearOnJob >= 2){
            cout << "You qualify for the loan.";
        }
        else {
            cout << "Minimum years at current job not met.";
        }
    }
    else {
        cout << "Minimum salary requirement not met.";
    }
    
    return 0;
}