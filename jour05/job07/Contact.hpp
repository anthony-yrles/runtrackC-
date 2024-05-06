#include <iostream>

using namespace std;

class Contact {
public:
    // Constructor
    Contact(string name, int number) : name(name), number(number) {}

    // Copy constructor
    Contact(const Contact &contact) : name(contact.name), number(contact.number) {}

    // Setters
    void setName(string name) {
        this->name = name;
    }
    void setNumber(int number) {
        this->number = number;
    }

    // Print contact
    void printContact() const {
        cout << "Name: " << getName() << "\n";
        cout << "Number: " << getNumber() << "\n";
    }
private:
    // Attributes
    string name;
    int number;

    // Getters
    string getName() const {
        return name;
    }
    int getNumber() const {
        return number;
    }
};