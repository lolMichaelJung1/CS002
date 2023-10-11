//Chapter 4 Lab 0 
//Summary: Experiment with the 7 predefined math statements 
//Input: double x
//Output:print statement
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    double x(169), y(-13), z(-3.18), i(14.999), j(3.14);
    long s(-112);

    double a = sqrt(x);
    double b = abs(y);
    double c = fabs(z);
    double d = labs(s);
    double e = ceil(i);
    double f = floor(j);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;


    return 0;
}