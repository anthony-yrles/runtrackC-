#include <iostream>
#include <string>

using namespace std;

int main() {

    // Declaration of the variable
    int table[5] = {1, 2, 3, 4, 5};

    // Declaration of the pointer
    int *ptr = table;

    // Display the address and the value of the first entry of the table
    cout << "L'adresse de la première entrée du tableau est : " << ptr << endl;
    cout << "La valeur de la première entrée du tableau est : " <<*ptr << endl;

    // Display the address and the value of the second entry of the table
    cout << "L'adresse de la deuxième entrée du tableau est : " << ptr + 1 << endl;
    cout << "La valeur de la deuxième entrée du tableau est : " << *(ptr + 1) << endl;

    // Display the address and the value of the third entry of the table
    cout << "L'adresse de la troisième entrée du tableau est : " << ptr + 2 << endl;
    cout << "La valeur de la troisième entrée du tableau est : " << *(ptr + 2) << endl;

    // Display the address and the value of the fourth entry of the table
    cout << "L'adresse de la quatrième entrée du tableau est : " << ptr + 3 << endl;
    cout << "La valeur de la quatrième entrée du tableau est : " << *(ptr + 3) << endl;

    // Display the address and the value of the fifth entry of the table
    cout << "L'adresse de la cinquième entrée du tableau est : " << ptr + 4 << endl;
    cout << "La valeur de la cinquième entrée du tableau est : " << *(ptr + 4) << endl;
}