#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows (odd number): ";
    cin >> n;

    // Check if the number of rows is odd
    if (n % 2 == 0) {
        cout << "Please enter an odd number of rows." << endl;
        return 1;
    }

    // Upper half of the diamond
    for (int i = 0; i < n / 2 + 1; ++i) {
        for (int j = 0; j < n / 2 - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = n / 2 - 1; i >= 0; --i) {
        for (int j = 0; j < n / 2 - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

