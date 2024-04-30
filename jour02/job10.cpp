#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declare variables
    int number_chossed;

    do {
        // Ask for a number
        cout << "Enter a number: ";
        cin >> number_chossed;
        while (number_chossed < 0) {
            cout << "svp positif\n ";
            cout << "Enter a number: ";
            cin >> number_chossed;
        }
        cout << "sa racine carrée est : " << sqrt(number_chossed) << "\n";
    } while (number_chossed != 0);
}