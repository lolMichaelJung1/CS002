
//Chapter 3 Lab 4 Task 2
//Summary: Implemented switch statements
//Input: Int month 1-12
//Output: Int number of days in that month
#include <iostream>
using namespace std;

int main()
{
 int monthNumber;
 cout << "Enter a month(1-12) and I will print the number of the days in that month: \n";
 cin >>  monthNumber;

 switch (monthNumber)
 {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "This month has 31 days\n";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "This month has 30 days\n";
        break;
    case 2:
        cout << "This month has 28 or 29 days\n";
        break;
    default:
        cout << "Invalid Month\n";
        break;
 }

    return 0;
}
