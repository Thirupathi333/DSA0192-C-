#include <iostream>
using namespace std;

int main() {
    int n;
    int first = 0, second = 1, next;

    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series:" << endl;

    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }

    cout << endl;

    return 0;
}
