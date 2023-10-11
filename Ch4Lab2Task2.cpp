//Chapter 4 Lab 2 Task 1
//Summary: Implemented functions that mimic a simple calculator
//Input: num1, num2
//Output: r1, r2, r3, r4
#include <iostream>

using namespace std;
//function declaration
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double division(double x, double y);

int main()
{   
    int num1, num2;
    //Part A
    cout << "Please enter 2 numbers seperated by a space: ";
    cin >> num1 >> num2;
    //function call
    cout << "The sum of these two numbers is: " << add(num1, num2) << endl;


    return 0;
}

//function definition
double add(double x, double y){
    int res = subtract(x,y);
    cout << "\nThe difference of these two numbers is "<<res<<endl; 
    return x + y;
}
double subtract(double x, double y){
    int res = multiply(x,y);
    cout << "\nThe product of these two numbers is "<<res<<endl; 
    return y - x;
}
double multiply(double x, double y){
    int res = division(x,y);
    cout << "\nThe quotient of these two numbers is "<<res<<endl; 
    return x * y;
}
double division(double x, double y){
    return y/x;
    cout << endl;
}
