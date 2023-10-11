#include <iostream>
using namespace std;
int main()
{
    //Question 2
    int number;
    cout << "Enter an integer in the range 3-9: ";
    cin >> number;
    for(int x = 1; x <= number; x++){
        for(int y = 1; y <= x ; y++){
            cout << y;
        }
        cout << endl;
    }
}