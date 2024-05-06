#include <iostream>
#include "Animal.hpp"

using namespace std;

int main() {
    // Creation of a dog and a cat
    Chien chien;
    Chat chat;

    // Print the dog and the cat
    chien.crier();
    chien.manger();
    chat.crier();
    chat.manger();
}