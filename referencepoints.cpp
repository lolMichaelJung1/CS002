#include <iostream>
using namespace std;

void swap(int& x, int& y);
int main()
{   
    int x = 10, y = 10;
    cout << "before swap: " << x << " , " << y << endl;
    swap(x,y);
    cout << "after swap: " << x << " , " << y << endl;

    int a = 10;
    int &b = a; // set b to the address of a, i.e. b "references" a 
    cout << a << " , " << b << endl;

    b = 20;// b has the same memory address as a, so changing the value of b,
           //changes the value at that address, so a must change too.
    cout << a << " , " << b << endl;
}


