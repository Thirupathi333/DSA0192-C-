#include <iostream>
using namespace std;

// Function to check if a number is a neon number
bool isNeonNumber(int num) {
    int square = num * num;
    int sum = 0;
    
    // Calculate the sum of digits of the square
    while (square != 0) {
        sum += square % 10;
        square /= 10;
    }

    return sum == num;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isNeonNumber(num)) {
        cout << num << " is a neon number." << endl;
    } else {
        cout << num << " is not a neon number." << endl;
    }

    return 0;
}
