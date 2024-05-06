#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Struc to store student's name, surname and grade
struct StudentNote {
    string name;
    string surname;
    float grade;
};

int main() {
    string input;

    // Vector to store student's notes
    vector<StudentNote> studentNotes;

    do {
        cout << "Menu : \n 1. Ajouter une note \n 2. Afficher la liste des notes \n 3. Supprimer une note d'un étudiant \n 4. Afficher la moyenne des notes \n 5. Quitter \n";
        cin >> input;

        if (input == "1") {
            StudentNote newNote;
            cout << "Entrez le nom de l'étudiant: ";
            cin >> newNote.name;
            cout << "Entrez le prénom de l'étudiant: ";
            cin >> newNote.surname;
            cout << "Entrez la note de l'étudiant: ";
            cin >> newNote.grade;

            studentNotes.push_back(newNote);
        } else if (input == "2") {
            for (size_t i = 0; i < studentNotes.size(); ++i) {
                cout << "Étudiant " << studentNotes[i].name << " " << studentNotes[i].surname << ": ";
                cout << "Note : " << studentNotes[i].grade << endl;
            }
        } else if (input == "3") {
            size_t index;
            cout << "Entrez l'indice de la note à supprimer: ";
            cin >> index;
            if (index < studentNotes.size()) {
                studentNotes.erase(studentNotes.begin() + index);
            } else {
                cout << "Indice invalide." << endl;
            }
        } else if (input == "4") {
            float sum = 0;
            for (const auto& note : studentNotes) {
                sum += note.grade;
            }
            if (!studentNotes.empty()) {
                cout << "La moyenne des notes est: " << sum / studentNotes.size() << endl;
            } else {
                cout << "Pas de notes pour calculer la moyenne." << endl;
            }
        } else if (input == "5") {
            cout << "Au revoir!" << endl;
        } else {
            cout << "Entrée invalide. Veuillez réessayer." << endl;
        }
    } while (input != "5");

    return 0;
}
