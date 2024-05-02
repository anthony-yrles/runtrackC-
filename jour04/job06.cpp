#include <iostream>
#include <string>

using namespace std;

int main() {

    // Declaration of the variable
    int entier = 17;
    double flottant = 3.14;
    float reel = 123.345;
    string caractere = "La Plateforme";

    // Declaration of the pointer
    int *pointeurEntier = &entier;
    double *pointeurFlottant = &flottant;
    float *pointeurReel = &reel;
    string *pointeurCaractere = &caractere;

    // Display values and addresses for int
    cout << "Int values: " << *pointeurEntier << "\n";
    cout << "Int pointer address: " << pointeurEntier << "\n";

    // Display values and addresses for double
    cout << "Double values: " << *pointeurFlottant << "\n";
    cout << "Double pointer address: " << pointeurFlottant << "\n";

    // Display values and addresses for float
    cout << "Float values: " << *pointeurReel << "\n";
    cout << "Float pointer address: " << pointeurReel << "\n";

    // Display values and addresses for string
    cout << "String values: " << *pointeurCaractere << "\n";
    cout << "String pointer address: " << pointeurCaractere << "\n";

}