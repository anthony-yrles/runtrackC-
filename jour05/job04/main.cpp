#include <iostream>
#include "Joueur.hpp"

using namespace std;

int main() {
    // Create a new player
    Joueur joueur;

    Joueur joueur2(10, 20);

    Joueur joueur3(40, 60, "Joueur 3");


    // Print the player's x and y values
    joueur.printXAndYAndName();
    joueur2.printXAndYAndName();
    joueur3.printXAndYAndName();

    // Move the player
    joueur.setName("Joueur 1");
    joueur2.setX(30);
    joueur3.setY(70);

    // Print the player's x and y values
    joueur.printXAndYAndName();
    joueur2.printXAndYAndName();
    joueur3.printXAndYAndName();
}