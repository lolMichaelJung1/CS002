//Chapter 3 Lab 3 Task 1 
//Summary: Implemented decision making structures
//to output grade
//Input: Integer between 0-100
//Output: Character letter grade
#include <iostream>
using namespace std;

int main()
{
    int grade;
    
    cout << "What did you score on your final\n"; //output
    cin >> grade; //input
    //if else statement
    if (grade >= 96){
        cout << "A+";
    }
    else if (grade >= 93 ){
        cout << "A";
    }
    else if (grade >=90){
        cout << "A-";
    }
    else if (grade >= 87){
        cout << "B+";       
    }
    else if (grade >= 83){
        cout << "B";       
    }
    else if (grade >= 80){
        cout << "B-";       
    }
    else if (grade >= 77){
        cout << "C+";       
    }
    else if (grade >= 73){
        cout << "C";       
    }
    else if (grade >= 70){
        cout << "C-";       
    }
    else if (grade >= 67){
        cout << "D+";       
    }
    else if (grade >= 63){
        cout << "D";       
    }
    else if (grade >= 60){
        cout << "D-";       
    }
    else {
        cout << "F";
    }
    return 0;
}