#include <iostream>
#include "Personne.hpp"

using namespace std;

int main() {
    // Create some new player
    Personne personne1("Doe", 100, 0.5);
    Personne personne2("Dab", 200, 1.5);
    Personne personne3("Test", 300, 2.5);

    // Print the player's x and y values
    personne1.printPersonne();
    personne2.printPersonne();
    personne3.printPersonne();

    // Change player's values
    personne1.SetName("Lucas");
    personne2.SetLifepoints(150);
    personne3.SetDefense(3.5);

    // Print the new player's values
    personne1.printPersonne();
    personne2.printPersonne();
    personne3.printPersonne();   
}