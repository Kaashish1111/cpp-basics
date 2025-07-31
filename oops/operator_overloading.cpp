#include <iostream>
using namespace std;

class Fraction {
public:
    int numerator;
    int denominator;

    // Constructor
    Fraction(int num, int den) {
        numerator = num;
        denominator = den;
    }

    // Function to add two fractions and return a new Fraction
    Fraction add(Fraction f) {
        int num = numerator * f.denominator + f.numerator * denominator;
        int den = denominator * f.denominator;
        return Fraction(num, den);
    }

    // Display function
    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1(1, 2);      // 1/2
    Fraction f2(3, 4);      // 3/4

    Fraction result = f1.add(f2);  // Add fractions

    cout << "Sum: ";
    result.display();              // Prints: 10/8 (not simplified)

    return 0;
}
