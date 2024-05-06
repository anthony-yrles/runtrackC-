#include <iostream>
#include <cstring>

int main() {
    // Ask the user for a string
    std::cout << "Entrez une chaîne de caractères: ";
    std::string input;
    std::getline(std::cin, input);  // Read the whole line

    // Create a char array to store the string
    // +1 for the null terminator
    char tab[100];

    // Copy the string to the array
    std::strncpy(tab, input.c_str(), sizeof(tab) - 1);
    tab[sizeof(tab) - 1] = '\0';  // Be sure to add the null terminator

    // Print the array
    std::cout << "Le tableau contient: " << tab << std::endl;

    return 0;
}
