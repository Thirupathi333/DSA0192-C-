#include <iostream>
#include <climits>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;

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

    int max1 = INT_MIN; // Initialize maximum and second maximum
    int max2 = INT_MIN;

    // Find the maximum element
    for (int i = 0; i < size; ++i) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max2 == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element is: " << max2 << endl;
    }

    return 0;
}
