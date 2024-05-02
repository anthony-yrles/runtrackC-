#include <iostream>

using namespace std;

int main() {

    // Declaration of the variable
    int number = 2019;

    // Declaration of the pointer
    int *pointeurNumber = &number;

    // Display the address of the variable
    cout << "La valeur de number: " << *pointeurNumber << "\n";
    cout << "=== Code Execution Successful ===";
}