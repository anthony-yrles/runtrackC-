#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Struc to store staff's name and surname of Staff members
struct Staff {
    string name;
    string surname;
};

// Struc to store student's name and surname of Students
struct Etudiant {
    string name;
    string surname;
};

int main() {

    // Variables
    string name;
    string surname;
    string input;

    // Vector to store Staff members
    vector<Staff> Staffs;
    vector<Etudiant> Etudiants;

    // Staff members
    Staff pierre;
    pierre.name = "Maladrier";
    pierre.surname = "Pierre";
    Staff alicia;
    alicia.name = "Cordial";
    alicia.surname = "Alicia";
    // Add Staff members to the vector
    Staffs.push_back(pierre);
    Staffs.push_back(alicia);

    for (size_t i = 0; i < Staffs.size(); ++i) {
        cout << "Nom : " << Staffs[i].name << " Prénom : " << Staffs[i].surname << endl;
    }

    // Loop to add students to the vector
    do {
        cout << "Menu : \n 1. Ajouter un étudiant \n 4. Quitter \n";
        cin >> input;
        if (input == "1") {
            cout << "Entrez le nom de l'étudiant: ";
            cin >> name;
            cout << "Entrez le prénom de l'étudiant: ";
            cin >> surname;
            Etudiant etudiant;
            etudiant.name = name;
            etudiant.surname = surname;
            Etudiants.push_back(etudiant);
        } else if (input == "4"){
            cout << "Au revoir!" << endl;
        } else {
            cout << "Choix invalide." << endl;
        }
    } while (input != "4");

    // Display students
    for (size_t i = 0; i < Etudiants.size(); ++i) {
        cout << "Nom : " << Etudiants[i].name << " Prénom : " << Etudiants[i].surname << endl;
    }   

    return 0;
}