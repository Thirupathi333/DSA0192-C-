#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr1[MAX_SIZE], arr2[MAX_SIZE], merged[MAX_SIZE * 2];
    int size1, size2;

    cout << "Enter the size of the first array: ";
    cin >> size1;

    cout << "Enter the elements of the first array:" << endl;
    for (int i = 0; i < size1; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;

    cout << "Enter the elements of the second array:" << endl;
    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }

    // Merge arrays
    int mergedSize = size1 + size2;
    int index = 0;

    for (int i = 0; i < size1; ++i) {
        merged[index++] = arr1[i];
    }

    for (int i = 0; i < size2; ++i) {
        merged[index++] = arr2[i];
    }

    // Print merged array
    cout << "Merged array:" << endl;
    for (int i = 0; i < mergedSize; ++i) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
