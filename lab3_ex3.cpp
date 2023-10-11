//Header
//Summary:This code takes in a user's age and outputs their target rate zone
//showing both the lower and upper limits as fp values
//Input: age
//Output: lower and upper limits for heart rate
#include <iostream>

using namespace std;

int main()
{
    int age;
    float lowerLimit, upperLimit;
    cout<<"What is your age? ";//output
    cin >> age;//input
    lowerLimit = 0.6*(220 - age);//processing
    upperLimit = 0.75*(220 - age);//processing
    cout<<"Your target heart rate is between " << lowerLimit << " and " 
    << upperLimit;//output
}
