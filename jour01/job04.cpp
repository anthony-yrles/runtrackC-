#include <iostream>
// Needed for atoi
#include <cstdlib>

int main(int argc, char* argv[]) {

    //  First addition one int to another
    int x = 5;
    int y = 3;
    std::cout << "L'addition de " << x << " + " << y << " est égal à " << (x + y) << std::endl;

    //  Second addition one int to another

    if (argc > 1) {
        // Put the first argument in an variable as an integer
        int i = std::atoi(argv[1]);
        int j = std::atoi(argv[2]);
    
        std::cout << "L'addition de " << i << " + " << j << " est égal à " << (i + j) << std::endl;
    } else {
        // If there is no argument, print the error message
        std::cout << "Usage: " << argv[0] << " <int1> <int2>" << std::endl;
    }
}