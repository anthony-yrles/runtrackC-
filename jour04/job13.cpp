#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Struc to store destination's name and distance
struct Destination {
    string name;
    int distance;
};

int main() {
    string input;
    vector<Destination> destinations;

    // Loop to add destinations to the vector
    do {
        cout << "Menu : \n 1. Ajouter une destination \n 2. Afficher la liste des destinations \n 3. Modifier une destination \n 4. Modifier la distance d'une destination \n 5. Quitter \n";
        cin >> input;
        // Add a destination
        if (input == "1") {
            Destination newDestination;
            cout << "Entrez le nom de la destination: ";
            cin >> newDestination.name;
            cout << "Entrez la distance de la destination: ";
            cin >> newDestination.distance;
            destinations.push_back(newDestination);
        // Display the list of destinations
        } else if (input == "2") {
            for (size_t i = 0; i < destinations.size(); ++i) {
                cout << "Destination " << destinations[i].name << ": ";
                cout << "Distance : " << destinations[i].distance << endl;
            }
        // Modify a destination
        } else if (input == "3") {
            size_t index;
            cout << "Entrez l'indice de la destination à modifier: ";
            cin >> index;
            if (index < destinations.size()) {
                cout << "Entrez le nouveau nom de la destination: ";
                cin >> destinations[index].name;
            } else {
                cout << "Indice invalide." << endl;
            }
            cout << "Destination mofiée avec succès. Nouvelle destination :" << destinations[index].name;
        // Modify the distance of a destination
        } else if (input == "4") {
            size_t index;
            cout << "Entrez l'indice de la destination à modifier: ";
            cin >> index;
            if (index < destinations.size()) {
                cout << "Entrez la nouvelle distance de la destination: ";
                cin >> destinations[index].distance;
            } else {
                cout << "Indice invalide." << endl;
            }
            cout << "Distance modifiée avec succès. Nouvelle distance :" << destinations[index].distance;
        // Quit
        } else if (input == "5") {
            cout << "Au revoir!" << endl;
        } else {
            cout << "Choix invalide." << endl;
        }
    } while (input != "5");
}
        