//Chapter 2 Lab 3
//Summary:Program that counts the number of months it takes to reach a
//credit card balance of $100
//Input: none
//Output: the number of months it takes for the cc balance to be $100
#include <iostream>
using namespace std;

int main()
{
double balance = 50;
const double x = 0.02;
int y = 0;

while (balance < 100){ // while loop 
    y++; // increment variable y which is equal to month 
    balance = balance + (balance * x); //processing
}
//output
cout << fixed;
cout.precision(2);
cout << "This program tells you how long it takes \n";
cout << "to accumulate a debt of $100, starting with \n";
cout << "an initial balance of $50 owed. \n";
cout << "The interest rate is 2% per month. \n";
cout << "After " << y << " months, \n";
cout << "your balance due will be $" << balance;

}
