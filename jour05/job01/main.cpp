#include <iostream>
#include "Joueur.hpp"

using namespace std;

int main() {
    // Create a new player
    Joueur joueur;

    // Set the player's x and y values
    joueur.setX(10);    
    joueur.setY(20);

    // Print the player's x and y values
    joueur.printXAndY();
    // Move the player by 5 in the x and y directions
    joueur.move(5, 5);
    // Print the new player's x and y values
    joueur.printXAndY();
}