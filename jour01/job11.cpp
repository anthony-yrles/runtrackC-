#include <iostream>

int main() {
    int n;
    int m;
    int temporary;

    // Get the numbers from the user
    std::cout << "Entrez un nombre n et un nombre m." << std::endl;
    std::cin >> n >> m;

    // Display the numbers
    std::cout << "n = " << n << ", m = " << m << std::endl;

    // Swap the numbers
    temporary = n;
    n = m;
    m = temporary;

    // Display the numbers
    std::cout << "n = " << n << ", m = " << m << std::endl;
    
}