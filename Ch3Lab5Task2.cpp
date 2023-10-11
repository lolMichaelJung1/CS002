//Chapter 3 Lab 5 Task 2 
//Summary: Implemented for loops
//Input: none 
//Output: Sum of all odd numbers between [0, 50]
//from a for loop and while loop
#include <iostream>
using namespace std;

int main()
{
    int sum = 0, sum2 = 0, i = 1;

    for (int i = 1; i <= 50; i += 2){
        sum += i;
    }

    while (i <= 50){
        cout << i << endl;
        sum2 += i;
        i += 2;
    }

    cout << "The sum of the odd number from 0-50 using a for loop is\n" << sum << endl;
    cout << "The sum of the odd number from 0-50 using a while loop is\n" << sum2;
    return 0;
    
}