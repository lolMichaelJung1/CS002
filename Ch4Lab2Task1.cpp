//Chapter 4 Lab 2 Task 1
//Summary: Implemented a function that calculates 
//the total cost of items you buy
//Input: int numItems, double itemPrice
//Output: double totalPrice
#include <iostream>
using namespace std;
//declared totalCost function
double totalCost(int items, double price);

int main()
{   
    const double taxRate = 1.05;
    int numItems = 0;
    double itemPrice = 0.0;
    //output and input 
    cout << "Enter number of items: ";
    cin >> numItems;
    cout << "Enter the price per item: $";
    cin >> itemPrice;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //function call and processing
    double total = (totalCost(numItems, itemPrice)) * taxRate;
    cout << numItems << " items at $" << itemPrice << " each.\n";
    cout << "Final bill, including tax, is $" << total;

    return 0;
}

//function definition
double totalCost(int items, double price){
    double cost;
    cost = items * price;
    return cost;
}