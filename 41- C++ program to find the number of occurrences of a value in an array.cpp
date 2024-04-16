#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size, target;

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

    cout << "Enter the value to find occurrences: ";
    cin >> target;

    int count = 0;

    // Count occurrences of target value
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            count++;
        }
    }

    cout << "Number of occurrences of " << target << " in the array: " << count << endl;

    return 0;
}
