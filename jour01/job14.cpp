#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int n;

    // Ask the user to enter a number
    std::cout << "Entrez un nombre: ";
    std::cin >> n;

    // Convert the number to a string
    std::string n_str = std::to_string(n);

    // Reverse the string
    std::reverse(n_str.begin(), n_str.end());

    // Convert the reversed string to an integer
    int reversed_number = std::stoi(n_str);

    // Print the reversed number
    std::cout << "Nombre inversé: " << reversed_number << std::endl;

    return 0;
}