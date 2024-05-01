#include <iostream>
#include <cmath>

using namespace std;

// Function to count the number of digits in a number
int countDigits(int n) {
    int count = 0;
    // If the number is 0, return 1
    if (n == 0) {
        return 1;
    }
    // If the number is negative, make it positive
    if (n < 0) {
        n = -n;
    }
    // Count the number of digits
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main(int argc, char const *argv[]) {
    // Declare variables
    int n;

    if (argc > 1 && argc < 3) {
        // Check if there are enough arguments and Declare variables
        n = atoi(argv[1]);
    } else {
        // Print an error message and return 1 if there are not enough arguments
        cout << "Usage: " << argv[0] << " <number>" << endl;
        return 1;
    }
    // Check if the number is a Narcissus number
    int sum = 0;
    int temp = n;
    int digits = countDigits(n);

    // Calculate the sum of the digits to the power of the number of digits
    while (temp > 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    // Check if the sum is equal to the number
    if (sum == n) {
        cout << "Le nombre " << n << " est un nombre Narcisse" << endl;
    } else {
        cout << "Le nombre " << n << " n'est pas un nombre Narcisse" << endl;
    }
}