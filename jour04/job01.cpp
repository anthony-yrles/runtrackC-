#include <iostream>
#include <vector>

using namespace std;

int main() {
    int number = 2019;

    int *pointeurNumber = &number;

    cout << "Address of the variable number: " << *pointeurNumber << "\n";
    cout << "=== Code Execution Successful ===";
}