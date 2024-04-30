#include <iostream>

int main(int argc, char const *argv[])
{
    int number_1, number_2, number_3;
    // Get three numbers from the user
    std::cout << "Enter three number: ";
    // Store the numbers in the variables number_1, number_2, and number_3
    std::cin >> number_1 >> number_2 >> number_3;

    // Check which number is the greatest
    if (number_1 > number_2 && number_1 > number_3)
    {
        // If number_1 is the greatest
        std::cout << number_1 << " is the greatest number." << std::endl;
    }
    else if (number_2 > number_1 && number_2 > number_3)
    {
        // If number_2 is the greatest
        std::cout << number_2 << " is the greatest number." << std::endl;
    }
    else
    {
        // If number_3 is the greatest
        std::cout << number_3 << " is the greatest number." << std::endl;
    }
}