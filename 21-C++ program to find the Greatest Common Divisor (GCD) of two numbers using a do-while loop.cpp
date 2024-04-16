#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    // Input two numbers from the user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    // Variables to store GCD and temporary value
    int gcd, temp;
    
    // Initialize gcd to 1 (minimum possible gcd)
    gcd = 1;
    
    // Compute GCD using Euclidean algorithm with do-while loop
    do {
        temp = num1 % num2;
        if (temp == 0)
            gcd = num2;
        else {
            num1 = num2;
            num2 = temp;
        }
    } while (temp != 0);
    
    // Output the GCD
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd << endl;
    
    return 0;
}
