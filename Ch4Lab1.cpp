//Chapter 4 Lab 1
//Summary: Implemented typecasting and math functions. Converted 
//equations to C++
//Input: Integers x, y, a, b, c
//Output: Root of x+y, quadratic formula, x^(y+7)
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    //Part A
    int num1=11, num2=2;
    double d = static_cast<double>(num1)/num2;
    cout << d << endl;

    //Part B
    cout << "pow(2,3)=" << pow(2,3) << endl;
    cout << "fabs(-3.5)=" << fabs(-3.5) << endl;
    cout << "sqrt(pow(3,2))=" << sqrt(pow(3,2)) << endl;
    cout << "7 / abs(-2)ceil(5.8)=" << (7/abs(-2)*ceil(5.8)) << endl;
    cout << "ceil(5.8)=" << ceil(5.8)<< endl;
    cout << "floor(5.8)=" << floor(5.8) << endl;

    //Part C
    double x, y, a, b, c, eq1, eq2, eq3;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    eq1 = sqrt(x+y);
    cout << "The result of equation of 1 is: " << eq1 << endl;
    eq2 = (-b + sqrt(b*b - (4*a*c)))/(2*a);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The result of equation of 2 is: " << eq2 << endl;
    eq3 = pow(x, (y+7)) ;
    cout << "The result of equation of 3 is: " << eq3 << endl;
    // eq3 = 
    return 0;
}