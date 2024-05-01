#include <iostream>

using namespace std;

int main() {
    // Declare 2 variables
    string toTransform = "vive la plateforme !";
    string transformed = "";

    // Loop through the string and transform lowercase to uppercase
    for (int i = 0; i < toTransform.length(); i++) {
        if (islower(toTransform[i])) {
            transformed += toupper(toTransform[i]);
        } else {
            transformed += toTransform[i];
        }
    }
    // Print the transformed string
    cout << transformed << endl;
}