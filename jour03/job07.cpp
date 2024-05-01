#include <iostream>
#include <string>

using namespace std;

int main() {

    // Declare variables
    int inputUser[10] {};
    int input;
    int count = 0;
    int biggest = 0;

    // Get user input until 10 integers are entered
    do {
        cout << "Entrez 10 entiers : ";
        cin >> input;
        inputUser[count] = input;
        count++;
    } while (count < 10);

    // Find the biggest integer
    for (int i : inputUser) {
        if (i >= biggest){
            biggest = i;
        };
    }
    
    // Output result
    cout << "Le plus grand entier est : " << biggest;
}