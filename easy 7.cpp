#include <iostream>
using namespace std;

int main() {
    // Declare an array of integers
    int arr[] = {10, 20, 30, 40, 50};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Display the elements of the array using a loop
    cout << "Elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }

    return 0;
}
