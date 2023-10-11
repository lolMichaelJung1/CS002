//Chapter 2 Lab 1 Task 2
//Summary:Program that evaluates 6 mathematical operations
//Input: Variables a,b,c,d,x,y,z
//Output: 
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, x, y, z;
    int eq1,eq2, eq5, eq6;
    double eq3, eq4;
    cout << "Enter the the values for a,b,c,d: "; //output
    cin >> a >> b >> c >> d; //input
    cout << "Enter the the values for x,y,z: ";
    cin >> x >> y >> z; //input

    //processing 
    eq1 = (b * b)- (4 * a * c);
    eq2 = x * (y + z);
    eq3 = 1.0 / (x^2 + x + 3);
    eq4 = (a + b)/(c - d);
    eq5 = 30 - 5 / 2.0;
    eq6 = 19 + 7 % 3 - 4;
    //output
    cout << "The  result of equation 1 is: " << eq1 << "\n";
    cout << "The  result of equation 2 is: " << eq2 << "\n";
    cout << "The  result of equation 3 is: " << eq3 << "\n";
    cout << "The  result of equation 4 is: " << eq4 << "\n";
    cout << "The  result of equation 5 is: " << eq5 << "\n";
    cout << "The  result of equation 6 is: " << eq6 << "\n";
    return 0;
}
