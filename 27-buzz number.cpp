#include <iostream>
using namespace std;

// Function to check if a number is a buzz number
bool isBuzzNumber(int num) {
    return (num % 7 == 0) || (num % 10 == 7);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isBuzzNumber(num)) {
        cout << num << " is a buzz number." << endl;
    } else {
        cout << num << " is not a buzz number." << endl;
    }

    return 0;
}
