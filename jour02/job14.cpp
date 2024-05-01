#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    // Declare variables
    int n;

    if (argc > 1) {
        // Check if there are enough arguments and Declare variables
        n = atoi(argv[1]);
    } else {
        // Print an error message and return 1 if there are not enough arguments
        cout << "Usage: " << argv[0] << " <number>" << endl;
        return 1;
    }
}