#include <iostream>
using namespace std;

int main() {
    int num;
    unsigned long long factorial = 1; // We use unsigned long long to handle larger factorials
    
    cout << "Enter a positive integer: ";
    cin >> num;

    // Check if the number is negative
    if (num < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate factorial using a for loop
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        
        cout << "Factorial of " << num << " = " << factorial << endl;
    }

    return 0;
}
