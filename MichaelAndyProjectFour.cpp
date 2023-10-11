// Project 4 Maximum Numbers
// Summary: Write a program that finds the largest of either two or three numbers. 
//This program must use two functions
// Input: int a,b,c or a,b
// Output: The largest number out of the group
#include <iostream>
using namespace std;

//declared both function
int Max(int a, int b, int c);
int Max(int a, int b);

int main() { 
int one = 5;
int two = 7;
int three = 9;
int m;

//function calls
m = Max(one, two, three);
cout << "Max("<<one<<", "<<two<<", "<<three<<") is "<<m<<endl;

m = Max(two, one, three);
cout << "Max("<<two<<", "<<one<<", "<<three<<") is "<<m<<endl;

m = Max(three, one, two);
cout << "Max("<<three<<", "<<one<<", "<<two<<") is "<<m<<endl;

m = Max(one, two);
cout << "Max("<<one<<", "<<two<<") is "<<m<<endl;

m = Max(two, three);
cout << "Max("<<two<<", "<<three<<") is "<<m<<endl;

return 0; 
}

//function definition

//In this function we called the other Max function 
//to find the max of three numbers. The inner function call
//finds the max of x and y and in the outer function call
//we find the max between EITHER x or y AND z.
int Max(int x, int y, int z){
    return Max(Max(x,y),z);
}

//In this function we first added x and y, and then the absolute difference of
//x and y and finally multiplied the sum by 0.5. What this does is, if x is greater than y
//the absolute differencevis added to x and divided by 2 which returns x and vice versa.
int Max(int x, int y){
    return (x + y + abs(x - y)) * 0.5;
}