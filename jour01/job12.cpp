#include <iostream>
#include <vector>

int main() {
    // Create a vector to store 5 numbers
    std::vector<int> numbers(5);
    int moyenne = 0;

    // Ask the user to enter 5 numbers
    std::cout << "Enter 5 numbers:" << std::endl;
    // Read each number
    for (int i = 0; i < 5; i++) {
        std::cin >> numbers[i];
        // Add the number to the sum
        moyenne += numbers[i];
    }

    // Calculate the average
    moyenne = moyenne / numbers.size();
    std::cout << "The average of the numbers is: " << moyenne << std::endl;
}
