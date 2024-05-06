#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Fixed size array of fruits
    string fruits[5] = {"Pomme", "Banane", "Orange", "Fraise", "Raisin"};

    // Print the list of fruits
    cout << "Liste des fruits : ";
    for (const auto& fruit : fruits) {
        cout << fruit << ", ";
    }

    // Ask the user how many favorite fruits he has
    int tailleFavoris;
    cout << "Combien de fruits préférez-vous ? ";
    cin >> tailleFavoris;

    // Array to store user's favorite fruits
    vector<string> favoris;

    // Ask the user to enter his favorite fruits
    cout << "Entrez vos fruits préférés (jusqu'à " << tailleFavoris << ") : ";
    for (int i = 0; i < tailleFavoris; ++i) {
        string fruit;
        cout << "Fruit " << (i + 1) << ": ";
        cin >> fruit;
        // Add each favorite fruit to the array
        favoris.push_back(fruit);
    }

    // Print the list of favorite fruits
    cout << "Vos fruits préférés : ";
    for (const auto& favori : favoris) {
        cout << favori << ", ";
    }

    return 0;
}
