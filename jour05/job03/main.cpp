#include <iostream>
#include "Joueur.hpp"

using namespace std;

int main() {
    // Create a new player
    Joueur joueur;

    Joueur joueur2(10, 20);

    Joueur joueur3(40, 60, "Joueur 3");


    // Print the player's x and y values
    joueur.printXAndY();
    joueur2.printXAndY();
    joueur3.printXAndY();
}