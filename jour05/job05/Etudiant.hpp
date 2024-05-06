#include <iostream>

using namespace std;

class Etudiant {
public:
    Etudiant(string name, int lifepoints, float defense) : name(name), lifepoints(lifepoints), defense(defense) {}
    void setName(string name) {
            this->name = name;
        }

        void setLifepoints(int lifepoints) {
            this->lifepoints = lifepoints;
        }

        void setDefense(float defense) {
            this->defense = defense;
        }

        void printEtudiant() const {
            cout << "Name: " << getName() << "\n";
            cout << "Lifepoints: " << getLifepoints() << "\n";
            cout << "Defense: " << getDefense() << "\n";
        }
        
private:
    string name;
    int lifepoints;
    float defense;

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