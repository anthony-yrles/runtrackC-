#include <iostream>

using namespace std;

int main() {
    // Create a variable x
    int x = 12;

    // Create a reference to x
    int& ref_x = x;

    // Modify the value of x through the reference
    ref_x = 20;

    // display the value of x and ref_x
    cout << "La valeur de x est maintenant: " << x;
    cout << "La valeur de ref_x est: " << ref_x;

    return 0;
}
