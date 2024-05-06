#include <iostream>
#include <string>

using namespace std;

int main() {
    // Create two strings
    string str1;
    string str2;

    // Ask the user for two strings
    cout << "Entrez la première chaîne de caractères : ";
    getline(cin, str1);
    cout << "Entrez la deuxième chaîne de caractères : ";
    getline(cin, str2);

    // Check if the first string is included in the second
    if (str1.find(str2) != string::npos) {
        cout << "La première chaîne est incluse dans la deuxième." << std::endl;
    } else {
        cout << "La première chaîne n'est pas incluse dans la deuxième." << std::endl;
    }
    return 0;
}
