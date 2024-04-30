#include <iostream>
// Use the iomanip library to control the precision of the output
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
    // Declare variables
    int n;
    double addition = 0.0;

    if (argc > 1) {
        // Check if there are enough arguments and Declare variables
        n = atoi(argv[1]);
    } else {
        // Print an error message and return 1 if there are not enough arguments
        cout << "Usage: " << argv[0] << " <number>" << endl;
        return 1;
    }

    // Calculate the sum of the first n terms of the harmonic series
    for (int i = 1; i <= n; ++i) {
        // Add the reciprocal of the current term to the sum
        addition += 1.0 / i;
    }

    // Print the sum of the first n terms of the harmonic series
    std::cout << "La somme des " << n << " premiers termes de la série harmonique est: ";
    // Set the precision of the output to 10 decimal places
    std::cout << std::setprecision(10) << addition << std::endl;

    return 0;
}


