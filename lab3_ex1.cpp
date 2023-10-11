//Header
//Summary:This code accepts two integers from the user 
//and outputs the sum, product, integer quotient, and modulus
//Input: first and second integers
//Output: sum, product, integer quotient, and modulus of first integer and second 
//integer
//comment input output and processing sections
#include <iostream>

using namespace std;

int main()
{
    int firstInteger, secondInteger;
    cout<<"Enter the first integer: "; //output
    cin >> firstInteger; //input
    cout<<"Enter the second integer: "; //output
    cin >> secondInteger; //input
    //processing calculations
    cout << firstInteger << " + " << secondInteger << " = " << firstInteger + secondInteger <<"\n";
    //output sum 
    cout << firstInteger << " * " << secondInteger << " = " << firstInteger * secondInteger <<"\n"; 
    //output product
    cout << firstInteger << " / " << secondInteger << " = " << firstInteger / secondInteger <<"\n"; 
    //output integer quotient
    cout << firstInteger << " % " << secondInteger << " = " << firstInteger % secondInteger <<"\n"; 
    //output modulus
}
