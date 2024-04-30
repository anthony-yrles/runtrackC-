#include <iostream>

int main(int argc, char* argv[]) {
    int x;
    // Ask the user for a number
    std::cout << "Quel nombre voulez vous tester ? "<< std::endl;
    // Store the number in x
    std::cin >> x;

    // Check if the number is even or odd
    if (x % 2 == 0) {
        // Print the result if the number is even
        std::cout << "Le nombre " << x << " est pair" << std::endl;
    } else {
        // Print the result if the number is odd
        std::cout << "Le nombre " << x << " est impair" << std::endl;
    }
}