#include <iostream>
#include <string>

using namespace std;

int main() {

    // Declaration of the variable
    string str = "Plateforme";

    // Declaration of the pointer
    string *pointeurStr = &str;

    cout <<"Entrer une chaine de charactere : "<< str << "\n";
    cout <<"Chaine inversé : ";

    // Loop through the word and reverse it
    for (int i = pointeurStr->length() - 1; i >= 0; i--) {
        cout <<(*pointeurStr)[i];
    }
    cout <<" \n === Code Execution Succesfull ===";
}