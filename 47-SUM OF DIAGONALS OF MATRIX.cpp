#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter the number of rows for the first matrix: ";
    cin >> rows1;

    cout << "Enter the number of columns for the first matrix: ";
    cin >> cols1;

    cout << "Enter the number of rows for the second matrix: ";
    cin >> rows2;

    cout << "Enter the number of columns for the second matrix: ";
    cin >> cols2;

    // Check if the matrices can be multiplied
    if (cols1 != rows2) {
        cout << "Error: Number of columns of the first matrix must be equal to the number of rows of the second matrix." << endl;
        return 1;
    }

    // Declare two matrices
    int mat1[rows1][cols1], mat2[rows2][cols2], product[rows1][cols2];

    // Input elements for the first matrix
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            cin >> mat1[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cin >> mat2[i][j];
        }
    }

    // Multiply two matrices
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            product[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the product matrix
    cout << "Product of the matrices:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
