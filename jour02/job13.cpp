#include <iostream>

using namespace std;

int main() {
    // Declare variables
    int result;
    cout << "   I ";
    // Print the multiplication table
    for (int i = 0; i <= 11; i++){
        for (int j = 0; j <= 9; j++){ 
            // Print the first line
            if (i == 0) {
                if (j < 9) {
                    cout << (j + 1) << "  ";
                } else {
                    cout << (j + 1) << " \n";
                }
            // Print the second line
            } else if (i == 1) {
                if (j < 9) {
                    cout << "----";
                } else {
                    cout << "\n";
                }
            // Print the rest of the table
            } else {
                // Print the first column
                if (j == 0) {
                    result = (i - 1) * (j + 1);
                    // Add spaces to align the numbers
                    if (result < 10) {
                        if (i - 1 < 10) {
                            cout << (i - 1) << "  I " << result << "  ";
                        } else {
                            cout << (i - 1) << " I " << result << " ";
                        }
                    } else {
                        cout << (i - 1) << " I " << result << " ";
                    }
                // Print the middle columns
                } else if (j < 9) {
                    result = (i - 1) * (j + 1);
                    // Add spaces to align the numbers
                    if (result < 10) {
                        cout << result << "  ";
                    } else {
                        cout << result << " ";
                    }
                // Print the last column
                } else {
                    result = (i - 1) * (j + 1);
                    if (result < 10) {
                        cout << result << " \n";
                    } else {
                        cout << result << " \n";
                    }
                }
            }
        }
    }
}