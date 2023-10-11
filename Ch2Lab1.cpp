//Chapter 2 Lab 1
//Summary:Example of an IPO program
//Input: number of bars and weight of one bar
//Output: total weight of candy bars
#include <iostream>

using namespace std;

int main()
{
    int numberOfBars(0);
    double oneWeight(0);
    cout << "Enter the number of candy bars in a package\n"; //output
    cout << "and the weight in ounces of one candy bar.\n";
    cout << "Then press return.\n";
    //cin >> numberOfBars; //input
    //cin >> oneWeight;
    double totalWeight(0);
    totalWeight = oneWeight * numberOfBars; //processing

    cout << numberOfBars << " candy bars\n"; //output
    cout << oneWeight << " ounces each\n";
    cout << "Total weight is " << totalWeight << " ounces.\n";

    cout << "Try another brand.\n"; //output
    cout << "Enter the number of candy bars in a package\n";
    cout << "and the weight in ounces of one candy bar.\n";
    cout << "Then press return.\n";
    cin >> numberOfBars; //input
    cin >> oneWeight;

    totalWeight = oneWeight * numberOfBars; //processing

    cout << numberOfBars << " candy bars\n"; //processing
    cout << oneWeight << " ounces each\n";
    cout << "Total weight is " << totalWeight << " ounces.\n";

    cout << "Perhaps an apple would be healthier.\n";
}
