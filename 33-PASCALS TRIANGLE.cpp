#include <iostream>
using namespace std;

// Function to calculate binomial coefficient C(n, k)
int binomialCoeff(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}

int main() {
    int numRows;

    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> numRows;

    // Iterate through each row
    for (int i = 0; i < numRows; ++i) {
        // Print leading spaces to create a pyramid shape
        for (int space = 0; space < numRows - i - 1; ++space) {
            cout << " ";
        }

        // Compute and print elements of current row
        for (int j = 0; j <= i; ++j) {
            cout << binomialCoeff(i, j) << " ";
        }

        // Move to the next row
        cout << endl;
    }

    return 0;
}
