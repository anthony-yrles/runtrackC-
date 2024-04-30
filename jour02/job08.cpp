#include <iostream>

using namespace std;

int main() {
    // Declare variables
    int a;
    int b;

    // Ask for two numbers
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    // Check if a is less than b
    if (a < b) {
        //  if Yes, loop while from a to b with increment of 1
        while (a <= b) {
            cout << a << endl;
            a++;
        }
        // if No, loop while from a to b with decrement of 1
    } else {
        while (a >= b) {
            cout << a << endl;
            a--;
        }
    }
}