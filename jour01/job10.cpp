#include <iostream>

int main(int argc, char const *argv[])
{
    // Declare the variables
    int price;
    int kilos_number;
    int tva;

    // Get the price, the number of kilos, and the TVA from the user
    std::cout << "Enter the price of the product, the number of kilos, and the TVA." << std::endl;
    std::cin >> price >> kilos_number >> tva;

    // Calculate the price of the product
    std::cout << "The price of the product is: " << price * kilos_number * (1 + tva / 100) << std::endl;
}
