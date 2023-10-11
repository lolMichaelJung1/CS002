//Header
//Summary:This code finds the sum and average of 6 floats
//Input: 6 floats
//Output: Sum and average of 6 floats
#include <iostream>

using namespace std;

int main()
{
    float fpOne, fpTwo, fpThree, fpFour, fpFive, fpSix;
    cout<<"Enter six fp numbers on a single line, separated by spaces: ";
    cin >> fpOne >> fpTwo >> fpThree >> fpFour >> fpFive >> fpSix; //input
    float sum = fpOne + fpTwo + fpThree + fpFour + fpFive + fpSix; //processing
    float average = sum / 6; //processing
    cout << "Sum of " << fpOne << " + " << fpTwo << " + " << fpThree //output
    << " + " << fpFour << " + " << fpFive << " + " << fpSix << 
    " = " << sum << "\n";
    cout << "Average = " << average; //output
}
