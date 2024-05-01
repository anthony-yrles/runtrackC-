#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
    // Declare variables
    int n;
    int nombre_1 = 0;
    int nombre_2 = 1;
    int nombre_3;

    // Check if there are enough arguments
    cout << "Entrez un nombre: ";
    cin >> n;

    // Calculate the Fibonacci sequence
    for (int i = 1; i <= n; i++) {
        nombre_3 = nombre_1 + nombre_2;
        nombre_1 = nombre_2;
        nombre_2 = nombre_3;
        cout << "Fibonacci(" << i << ") = " << nombre_3 << endl;
    }
    cout << "Le nombre de Fibonacci à la position " << n << " est " << nombre_3 << endl;
}