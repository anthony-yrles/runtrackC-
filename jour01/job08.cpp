#include <iostream>

int main(int argc, char const *argv[])
{
    int year;
    // Get the year from the user
    std::cout << "Enter a year: ";
    // Store the year in the variable year
    std::cin >> year;

    // Check if the year is a leap year
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        // If the year is a leap year
        std::cout << year << " is a leap year." << std::endl;
    }
    else
    {
        // If the year is not a leap year
        std::cout << year << " is not a leap year." << std::endl;
    }
}