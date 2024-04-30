#include <iostream>

int main(int argc, char* argv[]) {
    int x;
    // Ask the user for a number
    std::cout << "Merci de choisir votre multiplicateur "<< std::endl;
    // Store the number in x
    std::cin >> x;
    
    // Multiply x by all the numbers from 0 to 10
    for (int i = 0; i <= 10; i++) {
        // Print the result
        std::cout << x << " * " << i << " = " << (x * i) << std::endl;
    }
}