#include <iostream>

using namespace std;

int main() {

    // Declaration of the variable
    int n;
    int i = 0;

    cout << "Enter the number of elements in the table: ";
    cin >> n;

    int table[n];

    do {
        cout << "Enter the value of the element " << i << " of the table: ";
        cin >> table[i];
        i++;
    } while (i < n);

    for (int i : table) {
        cout << i << " ";
    }
}