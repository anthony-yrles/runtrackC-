#include <iostream>

using namespace std;

int main() {

    // Declaration of the variable
    int numberOne = 2019;
    int numberTwo = 42;

    // Declaration of the pointer
    int *pointeurNumberOne = &numberOne;
    int *pointeurNumberTwo = &numberTwo;
    int *pointeurNumberThree;

    // Change the value of the variable
    *pointeurNumberThree = *pointeurNumberOne;
    *pointeurNumberOne = *pointeurNumberTwo;
    *pointeurNumberTwo = *pointeurNumberThree;

    // Display the value of the variable
    cout << "La valeur de numberOne: " << numberOne << "\n";
    cout << "La valeur de numberTwo: " << numberTwo << "\n";
}