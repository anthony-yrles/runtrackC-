#include <iostream>
#include <string>
#include <vector>
#include <variant>

using namespace std;

int main() {

    // Declaration of the variable
    int annee = 2019;
    string nom = "La Plateforme";
    double valeur = 3.14;
    string groupe = "Étudiants";

    // Declaration of the pointer table
    void *table[4] = {&annee, &nom, &valeur, &groupe};

    // Display the address and the value of the first entry of the table
    cout << "L'adresse de la première entrée du tableau est : " << table[0] << endl;
    cout << "La valeur de la première entrée du tableau est : " << *(int*)table[0] << endl;

    // Display the address and the value of the second entry of the table
    cout << "L'adresse de la deuxième entrée du tableau est : " << table[1] << endl;
    cout << "La valeur de la deuxième entrée du tableau est : " << *(string*)table[1] << endl;

    // Display the address and the value of the third entry of the table
    cout << "L'adresse de la troisième entrée du tableau est : " << table[2] << endl;
    cout << "La valeur de la troisième entrée du tableau est : " << *(double*)table[2] << endl;

    // Display the address and the value of the fourth entry of the table
    cout << "L'adresse de la quatrième entrée du tableau est : " << table[3] << endl;
    cout << "La valeur de la quatrième entrée du tableau est : " << *(string*)table[3] << endl;
}