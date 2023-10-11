//Chapter 2 Lab 3 Task 2
//Summary:Program that outputs a greeting if the user
//inputs y or Y and stops if user inputs n or N
//Input: y for yes n for no
//Output: interactive greeting
#include <iostream>
using namespace std;

int main()
{
    char response;
    do{
        cout << "Hello\nDo you want another greeting?\nPress y for yes, n for no,\nand then press return: ";
        cin >> response;
    } while ((response == 'y') || (response == 'Y'));
    cout << "Good-Bye";

 return 0;
}
