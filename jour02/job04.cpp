#include <iostream>

using namespace std;

// int main(int argc, char const *argv[]) {
//     // Check if there are enough arguments and Declare variables
//     if (argc > 1 && argc < 4) {
//         int number_left = atoi(argv[1])
//         int number_right = atoi(argv[2])
//         char operation = argv[3][0]
//         // Check if the operation is supported if not print an error message and return 1
//         if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
//             cout << "Operation not supported" << endl;
//             return 1;
//         }
//     // Check if the right number is 0 if it is print an error message and return 1
//     } else {
//         cout << "Usage: " << argv[0] << " <number_left> <number_right> <operation>" << endl;
//         return 1;
//     }

//     // Perform the operation and print the result
//     switch(operation) {
//         case '+':
//             cout << number_left + number_right << endl;
//             break;
//         case '-':
//             cout << number_left - number_right << endl;
//             break;
//         case '*':
//             cout << number_left * number_right << endl;
//             break;
//         case '/':
//             cout << number_left / number_right << endl;
//             break;
//     }
// }

int main() {
    // Declare variables
    int number_left;
    int number_right;
    char operation;

    // Ask the user for the numbers and the operation
    cout << "Enter the first number: ";
    cin >> number_left;
    cout << "Enter the second number: ";
    cin >> number_right;
    // Check if the operation is supported if not ask again
    while (operation != '+' && operation != '-' && operation != '*' && operation != '/'){
        cout << "Enter the operation: ";
        cin >> operation;
        }

    // Perform the operation and print the result
    switch(operation) {
        case '+':
            cout << number_left + number_right << endl;
            break;
        case '-':
            cout << number_left - number_right << endl;
            break;
        case '*':
            cout << number_left * number_right << endl;
            break;
        case '/':
            cout << number_left / number_right << endl;
            break;
    }
    return 0;
}