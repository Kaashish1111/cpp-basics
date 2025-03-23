// Count the total occurrences of the digit '1' in all positive integers less than or equal to a given integer n.
#include<iostream>
using namespace std;
int countOnes(int num) {
    int count = 0;
    while(num != 0) {
        if(num % 10 == 1)
            count++;
        num /= 10;
    }
    return count;
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int totalCount = 0;
    for(int i = 1; i <= n; i++) {
        totalCount += countOnes(i);
    }
    cout << "The total number of occurrences of the digit '1' in all positive integers less than or equal to " << n << " is: " << totalCount << endl;
    return 0;
}