#include <iostream>

using namespace std;

int main () {

    // Declaration of the variable
    int numberOne = 10;
    int numberTwo = 5;
    int numberThree = 15;

    // Declaration of the pointer
    int *pointeurNumberOne = &numberOne;
    int *pointeurNumberTwo = &numberTwo;
    int *pointeurNumberThree = &numberThree;

    // Display the values before modification
    cout << "Number One avant modification: " << numberOne << "\n";
    cout << "Number Two avant modification: " << numberTwo << "\n";
    cout << "Number Three avant modification: " << numberThree << "\n";

    // Modify the values
    *pointeurNumberOne = 60;
    *pointeurNumberTwo = 20;
    *pointeurNumberThree = 30;

    // Display the values after modification
    cout << "Number One après modification: " << numberOne << "\n";
    cout << "Number Two après modification: " << numberTwo << "\n";
    cout << "Number Three après modification: " << numberThree << "\n";
}