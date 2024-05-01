#include <iostream>

using namespace std;

int main() {

    // Declaration of variables
    int tableOne[10] = {1, 53, 65, 78, 98, 123, 456, 789, 1000, 1234};
    int tableTwo[10] = {12, 45, 67, 89, 100, 234, 567, 890, 1234, 5678};
    int tableThree[20];
    int temp;

    // Merge the two tables
    for (int i = 0; i < 20; i++) {
        if (i < 10) {
            tableThree[i] = tableOne[i];
        } else {
            tableThree[i] = tableTwo[i - 10];
        }
    }

    // Buuble sort the table
    int n = 20;
    bool swapped;
    do {
        swapped = false;
        //  If the element is greater than the next element, swap them
        for (int i = 1; i < n; i++) {
            if (tableThree[i - 1] > tableThree[i]) {
                int temp = tableThree[i - 1];
                tableThree[i - 1] = tableThree[i];
                tableThree[i] = temp;
                swapped = true;
            }
        }
        // Decrease the number of elements to sort
        n--;
    // If no elements were swapped, the table is sorted
    } while (swapped);

    // Display the sorted table
    for (int i = 0; i < 20; i++) {
        cout << tableThree[i] << " ";
    }
}