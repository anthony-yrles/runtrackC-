#include <iostream>
#include <vector>

using namespace std;

int main() {

    // The vector is initialized with the values of the array
    vector<int> tableau = {10, 25, 37, 5, 63, 44, 19};
    // The first element of the vector is assigned to the variable max
    int max = tableau[0];

    // The loop starts at the second element of the vector
    // and compares each element with the variable max
    // if the element is greater than max, max is assigned the value of the element
    for (int i = 1; i < tableau.size(); ++i) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    };
    
    // The maximum value of the vector is displayed
    cout << "La valeur maximale du tableau est: " << max << endl;

    return 0;
}
