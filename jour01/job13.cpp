#include <iostream>
#include <cmath>

// Function to calculate the cube of a number
int cube_function(int n) {
    // Return the cube of the number
    return n * n * n;
}

int main(int argc, char const *argv[]) {

    // Declare variables
    int n;
    int cube;

    // Ask the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> n;


    // Check if the number is less than 5
    if (n < 5) {
        // Loop from n to 5
        for (int i = n; i <= 5; i++) {
            // Print the cube of the number
            std::cout << i * i * i << std::endl;  
            // Calculate the cube of the number using the pow function
            cube = pow(i, 3);
            std::cout << cube << std::endl;
            // Calculate the cube of the number using the cube_function
            cube = cube_function(i);
            std::cout << cube << std::endl;
        }
    } else {
        // Loop from 5 to n
        for (int i = n; i >= 5; i--) {
            // Print the cube of the number
            std::cout << i * i * i << std::endl;  
            // Calculate the cube of the number using the pow function
            cube = pow(i, 3);
            std::cout << cube << std::endl;
            // Calculate the cube of the number using the cube_function
            cube = cube_function(i);
            std::cout << cube << std::endl;
        }
    }
}