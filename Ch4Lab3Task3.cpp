//Chapter 4 Lab 3 Task 3
//Summary: Implemented a function that checks if 3 integer 
//variables are all even
//Input: int x, y, z 
//Output: Boolean, string
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
//function declaration
bool checkeven(int a, int b, int c);//prototype
int main()
{   
    int x(0), y(0), z(0);
    cout << "Input three integers and I will tell you if they are all even: ";
    cin >> x >> y >> z;
    //function call
    checkeven(x,y,z);
}
//function definition
bool checkeven(int a, int b, int c){
    if((a%2==0)&&(b%2==0)&&(c%2==0)){
        cout << "YES";
        return true;
    }
    else {
        cout << "NO";
        return false;
    }
}
