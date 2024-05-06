#include <iostream>
#include "Animal.hpp"

using namespace std;

int main() {
    Chat chat;

    chat.crier();
    chat.manger("croquettes");
    chat.manger("rien");
};