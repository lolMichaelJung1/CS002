//Chapter 4 Lab 3 Task 2
//Summary: Implemented a function for calculating
//mailing costs
//Input: int pounds, int ounces, double rate
//Output: double totalCost
#include <iostream>
using namespace std;
//function declaration
double mailingCost(int lbs, int oz, double cost);
int main()
{   
    int pounds, ounces;
    double rate, totalCost;
    cout << "How many pounds and ounces does your package weigh? ";
    cin >> pounds >> ounces;
    cout << "What is the cost per ounce? ";
    cin >> rate;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    totalCost = mailingCost(pounds, ounces, rate);
    cout << "The cost of mailing your package is $" << totalCost;
    //function call
}
//function definition
double mailingCost(int lbs, int oz, double cost){
    double final = (lbs * 16 + oz) * cost;
    return final;
}
