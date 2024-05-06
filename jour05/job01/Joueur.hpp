#include <iostream>

using namespace std;

class Joueur {
public:

    // Setteurs for x and y
    void setX(int x) {
        this->x = x;
    }
    void setY(int y) {
        this->y = y;
    }

    // Function that prints x and y using the private getters
    void printXAndY() const {
        cout << "X: " << getX() << "\n";
        cout << "Y: " << getY() << "\n";
    }

    // Function that moves the player
    void move(int x, int y) {
        this->x += x;
        this->y += y;
    }

private:
    // Initial x and y values
    int x;
    int y;

    // Getters for x and y
    int getX() const {
        return x;
    }
    int getY() const {
        return y;
    }
};
