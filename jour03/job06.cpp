#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {

    // Declare variables
    int T[10] {};
    int input;
    int count = 0;
    int supFive = 0;

    // Get user input until 10 integers are entered
    do {
        cout << "Entrez 10 entiers : ";
        cin >> input;
        T[count] = input;
        count++;
    } while (count < 10);

    // Count integers greater or equal to 5
    for (int i : T) {
        if (i >= 5){
            supFive++;
        };
    }

    // Output result
    cout << "Il y a " << supFive << " entiers supérieurs ou égaux à 5.";
}