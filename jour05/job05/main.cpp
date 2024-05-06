#include <iostream>
#include "Etudiant.hpp"

using namespace std;

int main() {
    Etudiant etudiant("Doe", "John", 42, 123456);
    Etudiant etudiant2("Doe", "Jane", 42, 123457);
    Etudiant etudiant3("Test", "Test", 42, 123458);

    etudiant.printEtudiant();
    etudiant2.printEtudiant();
    etudiant3.printEtudiant();

    etudiant.SetName("Lucas");
    etudiant.SetFisrtName("George");
    etudiant.SetAge(24);
    etudiant.SetMatricule(123459);

    etudiant.printEtudiant();
}