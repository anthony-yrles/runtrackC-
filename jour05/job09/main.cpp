#include <iostream>
#include "Animal.hpp"

using namespace std;

int main() {
    
    // Creation of a dog and a cat
    Chien chien;
    Chat chat;
    
    // Display the number of animals
    cout << "Nombre d'animaux : " << Animal::totauxAnimaux() << endl;

    Chien chien2;
    Chat chat2;
    Chien chien3;
    Chien chien4;

    // Display the number of animals
    cout << "Nombre d'animaux : " << Animal::totauxAnimaux() << endl;

};
