#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size, position;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        cout << "Invalid size entered." << endl;
        return 1;
    }

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the position of the element to delete (0-indexed): ";
    cin >> position;

    if (position < 0 || position >= size) {
        cout << "Invalid position entered." << endl;
        return 1;
    }

    // Shift elements to the left to fill the gap created by deleting the element
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array
    size--;

    cout << "Array after deletion:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
