#include <iostream>

int main(int argc, char* argv[]) {
    int x;
    std::cout << "Merci de choisir votre multiplicateur "<< std::endl;
    std::cin >> x;
    
    for (int i = 0; i <= 10; i++) {
        std::cout << x << " * " << i << " = " << (x * i) << std::endl;
    }
}