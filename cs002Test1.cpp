//Michael Jung Test 1 Question 3

#include <iostream>
using namespace std;
int main()
{
    //variable declaration
    int numCoins(0);
    char coinType;
    double value(0), pval(0.01), nval(0.05), dval(0.10), qval(0.25);
    
    //input and output
    cout<<"Enter the number of coins:\n";
    cin >> numCoins;
    cout<<"Enter the type of coin:\n";
    cin >> coinType;
    //input validation
    if (numCoins < 0)
    {
        cout << "Number of coins is less than zero.";
    }
    else
    {
    //switch statement
    switch(coinType){
        case 'P':
        case 'p':
            value = numCoins * pval;
        break;
        case 'N':
        case 'n':
            value = numCoins * nval;
            break;
        case 'D':
        case 'd':
            value = numCoins * dval;
            break;
        case 'Q':
        case 'q':
            value = numCoins * qval;
            break;
        default: //coin type validation
            cout << "This coin type is not supported.";
            break;
    }    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The value is: $" << value << endl;
    cout << "- - -\n";
    return 0;
    }
}



