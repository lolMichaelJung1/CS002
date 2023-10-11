//Chapter 4 Lab 3 Task 1
//Summary: Implementing functions and catching errors
//Input: none
//Output: none
#include <iostream>
using namespace std;
int three(int, int);
int main()
{   
    int f = 1;
    for (int i = 1 ; i < 5 ; i++)
    {   
        cout << f << "," << i << endl;
        f = three(i,f);
        cout << f << endl;
    }
}
int three(int a, int b)
{
    int z = a + a * b;
    return z;
}
