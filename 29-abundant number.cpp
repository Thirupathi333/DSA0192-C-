#include <iostream>
using namespace std;

// Function to calculate the sum of proper divisors of a number
int sumOfDivisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

// Function to check if a number is an abundant number
bool isAbundantNumber(int num) {
    return sumOfDivisors(num) > num;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isAbundantNumber(num)) {
        cout << num << " is an abundant number." << endl;
    } else {
        cout << num << " is not an abundant number." << endl;
    }

    return 0;
}
