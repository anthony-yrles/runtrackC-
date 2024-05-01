#include <iostream>
#include <string>

using namespace std;

int main() {

    // Declare and initialize two strings
    string firstString = "la plateforme !";
    string secondString = "la plateforme !";

    // Check if the strings length are equal
    if (firstString.length() != secondString.length()) {
        // If the strings length are not equal, return 1
        cout << "Les chaînes ont des longueurs différentes.";
        return 1;
    }

    // Check if the strings are equal
    for (int i = 0; i < firstString.length() ; i++) {
        if (firstString[i] != secondString[i]) {
            // If the strings are not equal, return 1
            cout << "Les chaînes diffèrent au caractère " << i << ".";
            return 1;
        }
    }
    
    // If the strings are equal, return 0
    cout << "Les chaînes sont identiques.";
    return 0;
}