#include <iostream>

using namespace std;

// Abstract class Animal
class Animal {
public:
    virtual void crier() = 0;
    virtual void manger() = 0;

    static void setCount() {
        count++;
    }
    // Static method to get the total number of animals
    static int totauxAnimaux() {
        return count;
    }

private:
    // Static variable to count the number of animals
    static int count;
}; 

int Animal::count = 0;
// Class Dog that inherits from Animal
class Chien : public Animal {
public:
    void crier() {
        cout << "Woof!" << endl;
    }
    void manger() {
        cout << "Le chien a une alimentation variée" << endl;
    }

    // Constructor to increment the number of animals
    Chien() {
        setCount();
    }
};

// Class Cat that inherits from Animal
class Chat : public Animal {
public:
    void crier() {
        cout << "Miaou!" << endl;
    }
    void manger() {
        cout << "Le chat mange du poisson" << endl;
    }

    // Constructor to increment the number of animals
    Chat() {
        setCount();
    }
};