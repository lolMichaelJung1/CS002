//Chapter 3 Lab 5 Task 1 
//Summary: Implemented while loops
//Input: Int number of items they ate today, calories of each item
//Output: Int total calories eaten
#include <iostream>
using namespace std;

int main()
{   
    int counter, numItems, caloriesItems, totalCalories;

    cout << "How many items did you eat today?";
    cin >> numItems;
    
    totalCalories = 0;
    counter = 0;

    cout << "Enter the number of calories in each of the\n" << numItems << " items eaten:\n";

    while (++counter <= numItems)
    {
        cin >> caloriesItems;
        totalCalories += caloriesItems;
    }
    cout << "Total calories eaten today = " << totalCalories << endl;
    return 0;
}