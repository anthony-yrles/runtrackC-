#include <iostream>

int main() {
    int n;
    std::cin >> n;
    switch(n)
    {
        case 0 : std::cout << "Nul\n";
        case 1 :
        case 2 : std::cout << "Petit\n"; break;
        case 3 :
        case 4 :
        case 5 : std::cout << "Moyen\n"; break;
        default : std::cout << "Grand\n";
    }
}

//  Response for n = 0: Nul, Petit
//  Response for n = 1: Petit
//  Response for n = 4 : Moyen
//  Response for n = 10 : Grand
//  Response for n = -5 : Grand