#include <iostream>

int main() {
    // Declare n
    int n;
    // Keep asking for a number until it is positive
    do {
        std::cout << "Donnez un nombre > 0: ";
        std::cin >> n;
    }
    // Check if n is positive
    while (n <= 0);
}