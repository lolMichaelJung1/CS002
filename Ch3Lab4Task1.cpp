//Chapter 3 Lab 4 Task 1
//Summary: Implemented switch statements
//Input: char midterm grade 
//Output: String message
#include <iostream>
using namespace std;

int main()
{
 char midTerm;
 cout << "Enter your midterm grade and press Return: ";
 cin >> midTerm;

 switch (midTerm)
 {
    case 'A':
    case 'a':
        cout << "Excellent. You need not take the final.\n";
        cout << "End of program.";
        break;
    case 'B':
    case 'b':
        cout << "Very good. Your midterm grade is now A\n";
        cout << "End of program.";
        break;
    case 'C':
    case 'c':
        cout << "Passing." << endl;
        cout << "End of program.";
        break;
    case 'D':
    case 'd':
        cout << "Not good. Go study.\n";
        cout << "End of program.";
        break;
    case 'F':
    case 'f':
        cout << "Not good. Go study.\n";
        cout << "End of program.";
        break;
    default:
        cout << "That is not a possible grade.\n";
        cout << "End of program.";
        break;
 }

    return 0;
}