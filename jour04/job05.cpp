#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

int main () {

    // Declaration of the variable
    int x;
    int y;
    Point point ={};

    // Declaration of the pointer
    Point *pointeurPoint = &point;

    // Modify the values
    pointeurPoint -> x = 10;
    pointeurPoint -> y = 5;

    // Display the values before modification
    cout << "Point avant modification: " << point.x << ", " << point.y << "\n";
}