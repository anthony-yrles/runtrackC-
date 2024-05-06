#include <iostream>

using namespace std;

// Abstract class Animal
class Animal {
public:
    virtual void crier() = 0;
    virtual void manger() = 0;
}; 

// Class Dog that inherits from Animal
class Chien : public Animal {
public:
    void crier() {
        cout << "Woof!" << endl;
    }
    void manger() {
        cout << "Le chien a une alimentation variée" << endl;
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
};