#include <iostream>

using namespace std;

int main() {
    int a;
    int b;

    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    if (a < b) {
        for (int i = a; i <= b; i++) {
            cout << i << endl;
        }
    } else {
        for (int i = a; i >= b; i--) {
            cout << i << endl;
        }
    }
}