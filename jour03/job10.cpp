#include <iostream>
#include <string>

using namespace std;

int main() {

    // Declare variables
    string str1;
    string str2 = "Bonjour";
    string tab[2];

    // Get user input
    cout << "Entrez une chaîne de caractères: ";
    cin >> str1;

    // Compare strings
    if (str1 < str2) {
        tab[0] = str1;
        tab[1] = str2;
    } else {
        tab[0] = str2;
        tab[1] = str1;
    }

    // Output result
    cout << "Les chaînes dans l'ordre lexicographique sont : " << tab[0] << ", " << tab[1] << endl;

    return 0;
}
