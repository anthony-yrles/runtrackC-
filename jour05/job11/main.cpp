#include <iostream>
#include "Operation.hpp"

using namespace std;

int main() {

    // Creation of two Operation objects
    Operation a(5);
    Operation b(3);

    // Overload operators +, -, *, /
    Operation c = a + b;
    cout << "a + b = " << c.a << endl;
    c = a - b;
    cout << "a - b = " << c.a << endl;
    c = a * b;
    cout << "a * b = " << c.a << endl;
    c = a / b;
    cout << "a / b = " << c.a << endl;
}