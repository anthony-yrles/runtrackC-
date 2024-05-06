#include <iostream>

using namespace std;

class Joueur {
public:

    // Default constructor that sets the initial x and y values to 0
    Joueur() : x(0), y(0) {}

    // Constructor that sets the initial x and y values to the given x and y values
    Joueur(int initialX, int initialY) : x(initialX), y(initialY){}

    // Constructor that sets the initial x and y values to the given x and y values and the name to the given name
    Joueur(int initialX, int initialY, string name) : x(initialX), y(initialY), name(name) {}
    
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
    string name;

    // Getters for x and y
    int getX() const {
        return x;
    }
    int getY() const {
        return y;
    }
};
