#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    // Calculate sum of digits using a while loop
    int remainder;
    while (n != 0) {
        remainder = n % 10; // Get the last digit
        sum += remainder;   // Add the digit to sum
        n /= 10;            // Remove the last digit
    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}
