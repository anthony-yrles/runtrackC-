#include <iostream>
#include "Contact.hpp"

using namespace std;

int main() {

    // Creation of a contact and a copy of this contact
    Contact contact1("Doe", 683174887);
    Contact copieContact1(contact1);

    // Print the contact and the copy of the contact
    contact1.printContact();
    copieContact1.printContact();

    // Modify the copy of the contact
    copieContact1.setName("Lucas");
    copieContact1.setNumber(683174888);

    // Print the contact and the copy of the contact
    contact1.printContact();
    copieContact1.printContact();

    // Creation of a contact and a copy of this contact
    Contact contact2("Anthony", 6831);
    Contact copieContact2 = contact2;

    // Print the contact and the copy of the contact
    contact2.printContact();
    copieContact2.printContact();

    // Modify the copy of the contact
    copieContact2.setName("Lucas");
    copieContact2.setNumber(683174888);

    // Print the contact and the copy of the contact
    contact2.printContact();
    copieContact2.printContact();
}