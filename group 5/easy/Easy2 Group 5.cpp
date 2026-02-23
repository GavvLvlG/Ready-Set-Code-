#include <iostream>
/*
    EASY 2 – Even or Odd
    Goal: Check if a number is even or odd and print "Even" or "Odd".
    Input: single integer (e.g. "9")
    Output: "Even" or "Odd" (e.g. "Odd")
*/
using namespace std;
int main() {
 int num;

 cout << "Number: ";
 cin >> num;

 if (num % 2 == 0)
 {
    cout << "Even";
 }
 else
 {
    cout << "Odd";
 }
}
