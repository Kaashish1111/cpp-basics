#include <iostream>
using namespace std;

void decimalToHexadecimal(int num) {
    string hex = "";
    while (num != 0) {
        int remainder = num % 16;
        char hexDigit;
        if (remainder < 10) {
            hexDigit = remainder + '0';
        } else {
            hexDigit = remainder - 10 + 'A';
        }

        hex = hexDigit + hex; 
        num /= 16;
    }

    cout << "Hexadecimal: " << hex << endl;
}
int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    decimalToHexadecimal(num);
    return 0;
}
