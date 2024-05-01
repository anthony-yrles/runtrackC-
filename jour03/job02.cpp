#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    // Declare 2 variables
    string toTransform = "vive la plateforme !";
    string transformed = "";
    // Declare a list of vowels
    list<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};

    // Loop through the string and remove vowels
    for (int i = 0; i < toTransform.length(); i++) {
        // find check from begin to end of the list if the current character is a vowel
        // if it is not a vowel, add it to the transformed string with == vowels.end()
        if (find(vowels.begin(), vowels.end(), toTransform[i]) == vowels.end()) {
            transformed += toTransform[i];
        }
    }
    cout << transformed << endl;
}