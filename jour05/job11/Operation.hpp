#include <iostream>

using namespace std;

class Operation {
public:
    int a;

    // Constructor
    Operation(int a) : a(a) {}

    // Overload operators +, -, *, /
    Operation operator+(const Operation& other) const {
        return Operation(a + other.a);
    }
    Operation operator-(const Operation& other) const {
        return Operation(a - other.a);
    }
    Operation operator*(const Operation& other) const {
        return Operation(a * other.a);
    }
    Operation operator/(const Operation& other) const {
        if (other.a == 0) {
            throw std::invalid_argument("Division par zéro n'est pas autorisée");
        }
        return Operation(a / other.a);
    }
};