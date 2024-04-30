#include <iostream>
// Needed for atoi
#include <cstdlib>

int main(int argc, char* argv[]) {

    //  First try of a loop from 100 to 1

    std::cout << "First try of a loop from 10 to 1" << std::endl;
    
    for (int i = 10; i > 0; i--) {
        std::cout << i << " Hello World!" << std::endl;
    }

    // Second try of a loop from argument to 1

    std::cout << "Second try of a loop from argument to 1" << std::endl;

    // Check if there is at least one argument
    if (argc > 1) {
        // Put the first argument in an variable as an integer
        int i = std::atoi(argv[1]);

        // Loop from the argument to 1
        for (; i > 0; i--) {
            std::cout << i << " Hello World!" << std::endl;
        }
    } else {
        // If there is no argument, print the error message
        std::cout << "Usage: " << argv[0] << " <start_value>" << std::endl;
    }

    return 0;
}
