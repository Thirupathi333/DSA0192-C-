#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;
    double sum = 0, average;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        cout << "Invalid size entered." << endl;
        return 1;
    }

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
        sum += arr[i]; // Accumulate sum while reading elements
    }

    // Calculate average
    average = sum / size;

    cout << "Average of all elements: " << average << endl;

    return 0;
}
