#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare and initialize a string
    string countString = "Vive la plateforme !";
    int count = 0;

    // Count the number of characters in the string
    for (int i = 0; i < countString.length(); i++) {
        count++;
    }

    // Print the number of characters in the string
    cout << "La taille est " << count;
}