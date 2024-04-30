#include <iostream>

int main() {
    char c = '\x01';
    short int p = 10 ;
    short x = p + 3;
    std::cout << x << std::endl;
    char y = c + 1;
    std::cout << y << std::endl;
    char z = p + c;
    std::cout << z << std::endl;
    short w = 3 * p + 5 * c;
    std::cout << w << std::endl;
}