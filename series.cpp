#include <iostream>
#include <cmath>
using namespace std;

double series(int n);
//sum of a bunch of fractions with 
//the characteristics that each fraction is one over n*n
//where input n is the upper boundary of a for loop

double series(int n){
    if (n <= 0){
        return 0.0;
    }
    double sum = 1;
    for (int i = 2; i <=n; i++){
        sum += 1.0/pow(i,i);
    }
    return sum;
}
int main()
{   
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(8);

    cout << "The sum is " << series(num);
}

