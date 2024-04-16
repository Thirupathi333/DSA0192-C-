#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    // Find the sum of proper divisors
    for (int i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of proper divisors equals the number
    if (sum == num) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}
