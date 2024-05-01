#include <iostream>

using namespace std;

int main() {

    int randomChoice = rand() % 100 + 1;
    int userChoice;
    int tries = 0;

    do {
        cout << "Entrez un nombre entre 1 et 100: ";
        cin >> userChoice;
        tries++;
        if (userChoice < randomChoice) {
            cout << "C'est plus! \n";
        } else if (userChoice > randomChoice) {
            cout << "C'est moins! \n";

        } else {
            cout << "Bravo! Vous avez trouvé le nombre mystère! en " << tries << " essais.";
        }
    } while (userChoice != randomChoice);
}