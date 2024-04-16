#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size, element, position;

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

    cout << "Enter the element to insert: ";
    cin >> element;

    cout << "Enter the position to insert (0-indexed): ";
    cin >> position;

    if (position < 0 || position > size) {
        cout << "Invalid position entered." << endl;
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = element;

    // Increment the size of the array
    size++;

    cout << "Array after insertion:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
