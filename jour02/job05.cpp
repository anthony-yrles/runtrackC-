#include <iostream>

using namespace std;

int main() {
    int n;
    // Ask the user for a number between 0 and 20
    do {
        cout << "Enter a number: ";
        cin >> n;
    }
    // Check if the number is between 0 and 20
    while (n < 0 || n > 20);
    
    // Check if the number is lower than 10
    if (n < 10) {
        // Print non validé if the number is lower than 10
        cout << "non validé" << endl;
    } else {
        // Print validé if the number is 10 or higher
        cout << "validé" << endl;
    }
}