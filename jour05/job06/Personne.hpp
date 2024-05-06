#include <iostream>

using namespace std;

class Personne {
public:
    // Constructor
    Personne(string name, int lifepoints, float defense) : name(name), lifepoints(lifepoints), defense(defense) {}

    // Setters
    void SetName(string name) {
        this->name = name;
    }
    void SetLifepoints(int lifepoints) {
        this->lifepoints = lifepoints;
    }
    void SetDefense(float defense) {
        this->defense = defense;
    }
    void printPersonne() const {
        cout << "Name: " << getName() << "\n";
        cout << "Lifepoints: " << getLifepoints() << "\n";
        cout << "Defense: " << getDefense() << "\n";
    }

private:
    // Attributes
    string name;
    int lifepoints;
    float defense;

    // Getters
    string getName() const {
        return name;
    }
    int getLifepoints() const {
        return lifepoints;
    }
    float getDefense() const {
        return defense;
    }
};