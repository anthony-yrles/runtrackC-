#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    int inputUser[10] {};
    int input;
    int count = 0;
    int supFive = 0;

    do {
        cout << "Entrez 10 entiers : ";
        cin >> input;
        inputUser[count] = input;
        count++;
    } while (count < 10);

    for (int i : inputUser) {
        if (i >= 5){
            supFive++;
        };
    }
    cout << "Il y a " << supFive << " entiers supérieurs ou égaux à 5.";
}