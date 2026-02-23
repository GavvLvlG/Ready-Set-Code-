#include <iostream>
/*
    EASY 1 – Sum of Two Numbers
    Goal: Read two integers and output their sum.
    Input: two integers separated by space (e.g. "5 10")
    Output: single integer (e.g. "15")
*/
using namespace std;
int main() {
    
    int num1, num2, sum;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    sum = num1 + num2;

    cout << "the Sum equals " << sum;

    return 0;


}
