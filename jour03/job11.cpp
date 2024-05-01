#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main (int argc, char** argv) {

    // Declaration of variables
    int sum = 0;
    vector<int>args;

    // Check if there are arguments
    if (argc > 1) {
        // Loop through the arguments and add them to the vector
        for (int i = 1; i < argc; i++) {
            int num = atoi(argv[i]);
            args.push_back(num);
        }
    }

    // Loop through the vector and add the even numbers
    for (int i = 0; i < args.size(); i++) {
        if(args[i] % 2 == 0) {
            sum += args[i];
        }
    }

    // Display the sum
    cout << "La somme des nombres pairs est: " << sum << endl;
}