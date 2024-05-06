#include <iostream>

using namespace std;

int main() {
    int table[5] = {1, 2, 3, 4, 5};

    for (const int &i : table) {
        cout << "table[" << i - 1 << "] = " << table[i - 1] << " \n";
    }
}