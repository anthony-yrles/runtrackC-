#include <iostream>
#include "Etudiant.hpp"

using namespace std;

int main() {
    Etudiant etudiant("Etudiant 1", 100, 50.0);
    Etudiant etudiant2("Etudiant 2", 200, 100.0);
    Etudiant etudiant3("Etudiant 3", 300, 150.0);

    etudiant.printEtudiant();
    etudiant2.printEtudiant();
    etudiant3.printEtudiant();

    etudiant.setName("Etudiant 1");
    etudiant2.setLifepoints(250);
    etudiant3.setDefense(200.0);

    etudiant.printEtudiant();
    etudiant2.printEtudiant();
    etudiant3.printEtudiant();
}