#include <iostream>

using namespace std;

main() {
    // Declare variables
    int i, n, somme;
    somme = 0;
    i = 0;

    // While loop
    while (i < 4) {
        // Ask for an integer
        cout << "Donnez un entier: ";
        // Get the integer
        cin >> n;
        // Add the integer to the sum
        somme += n;
        // Increment i
        i++;
    }
    // Print the sum
    std::cout << "Somme: " << somme << std::endl;

    // Do-while loop
    i = 0;
    do {
        // Ask for an integer
        cout << "Donnez un entier: ";
        // Get the integer
        cin >> n;
        // Add the integer to the sum
        somme += n;
        // Increment i
        i++;
        // Check if i is less than 4
    } while (i < 4);
    // Print the sum
    std::cout << "Somme: " << somme << std::endl;
}