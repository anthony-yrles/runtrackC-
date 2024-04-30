#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int factorial;

    if (argc > 1) {
        // Check if there are enough arguments and Declare variables
        factorial = atoi(argv[1]);
    } else {
        // Print an error message and return 1 if there are not enough arguments
        cout << "Usage: " << argv[0] << " <number>" << endl;
        return 1;
    }

    if (factorial < 0) {
        cout << "l'argument doit être positif : ";
        cin >> factorial;;
    } else {
        if (factorial < 13) {
            int result = 1;
            for (int i = 1; i <= factorial; i++) {
                result *= i;
                cout << "result : " << result << endl;
            }
            cout << "le factoriel de " << factorial << " est : " << result << endl;
        } else if (factorial >= 13 && factorial < 26) {
            long long result = 1;
            for (int i = 1; i <= factorial; i++) {
                result *= i;
            }
            cout << "le factoriel de " << factorial << " est : " << result << endl;
        } else {
            cout << "le nombre doit être inférieur à 26" << endl;
        }
    }
}