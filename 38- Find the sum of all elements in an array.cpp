#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size, sum = 0;

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

    // Calculate the sum of all elements
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    cout << "Sum of all elements: " << sum << endl;

    return 0;
}
