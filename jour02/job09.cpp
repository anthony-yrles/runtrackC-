#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int number_chossed;
    int a;
    int b;

    // Check if there are enough arguments and Declare variables
    if (argc > 1 && argc < 3) {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
    } else {
        // Print an error message and return 1 if there are not enough arguments
        cout << "Usage: " << argv[0] << " <number>" << endl;
        return 1;
    }

    // Ask for a number
    cout << "Enter a number: ";
    cin >> number_chossed;

    // Check if a is less than b
    if (a < b) {
        // if Yes, check if the number is between a and b
        if (number_chossed < a || number_chossed > b) {
            // if not, print PERDU
            cout << "PERDU" << endl;
        } else {
            // if yes, print GAGNE
            cout << "GAGNE" << endl;
        }
        // if No, check if the number is between a and b
    } else {
        if (number_chossed > a || number_chossed < b) {
            cout << "PERDU" << endl;
        } else {
            cout << "GAGNE" << endl;
        }
    }

}