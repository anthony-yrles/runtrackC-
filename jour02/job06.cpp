#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    // Check if there are enough arguments and Declare variables
    if (argc > 1) {
        n = atoi(argv[1]);
    } else {
        // Print an error message and return 1 if there are not enough arguments
        cout << "Usage: " << argv[0] << " <number>" << endl;
        return 1;
    }

    // Loop from 0 to n
    std::cout << "Loop from 0 to " << n << std::endl;

    for (int i = 0; i <= n; i++) {
        // Check if i is a multiple of 3, 5 or neither
        if (i % 3 == 0) {
            cout << i << " est un multiple de 3 \n";
        } else if (i % 5 == 0) {
            cout << i << " est un multiple de 5 \n";
        } else {
            cout << i << " n'est pas un multiple de 3 ou de 5 \n";
        }
    }
}