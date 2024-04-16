#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate the sum of factorials of digits of a number
int sumOfFactorialOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum;
}

// Function to check if a number is a strong number
bool isStrongNumber(int num) {
    return num == sumOfFactorialOfDigits(num);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isStrongNumber(num)) {
        cout << num << " is a strong number." << endl;
    } else {
        cout << num << " is not a strong number." << endl;
    }

    return 0;
}
