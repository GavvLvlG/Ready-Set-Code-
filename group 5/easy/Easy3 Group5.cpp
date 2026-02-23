#include <iostream>
/*
    EASY 3 – Factorial Calculator
    Goal: Compute factorial of n (n <= 10).
    Input: single integer n (e.g. "5")
    Output: factorial value (e.g. "120")
*/
using namespace std;
int main() {
int n;
long long factorial = 1;

cout << "Enter non negative number: ";
cin >> n;

if (n < 0)
{
    cout << "Error! Not found!";
}
else
{
    for (int i = 1; i <= n; ++i)
    {
        factorial *= 1;
    }
    cout << "Factorial of " << n << " = " << factorial << endl;
}
return 0;
}
