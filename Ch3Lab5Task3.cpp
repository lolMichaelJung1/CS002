//Chapter 3 Lab 5 Task 3
//Summary: Implemented nested loops
//Input: none
//Output:collage 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // for (int x = 0; x < 3; x++) {
    //     for (int y = 0; y < 7; y++) {
    //         if (y % 2 == 0) {
    //             cout << "& ";
    //         } else {
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }

    int row, column, result; 
    for(row = 1; row <= 10; row++){
        for(column = 1; column <=10; column++){
            result = row * column;
            cout << setw(4) << result;

        }
        cout << endl;
    }

    return 0;
}