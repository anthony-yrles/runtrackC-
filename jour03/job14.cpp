#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Declaration of variables
    string tab[5] = {"radar", "hello", "level", "stats", "world"};
    vector<string>palindromes;

    // Loop through the table and check if the word is a palindrome
    for (int i = 0; i < 5; i++) {
        // Get the word
        string word = tab[i];
        string reversedWord = "";
        // Loop through the word and reverse it
        for (int j = word.length() - 1; j >= 0; j--) {
            reversedWord += word[j];
        }
        // Check if the word is a palindrome
        if (word == reversedWord) {
            // Add the word to the vector
            palindromes.push_back(word);
        }
    }

    // Display the palindromes
    for (int i = 0; i < palindromes.size(); i++) {
        cout << palindromes[i] << " ";
    }
}