#include <iostream>
#include <string>

using namespace std;

int main() {
    int inputUser[10] {};
    int input;
    int count = 0;
    int biggest = 0;

    do {
        cout << "Entrez 10 entiers : ";
        cin >> input;
        inputUser[count] = input;
        count++;
    } while (count < 10);

    for (int i : inputUser) {
        if (i >= biggest){
            biggest = i;
        };
    }
    cout << "Le plus grand entier est : " << biggest;
}