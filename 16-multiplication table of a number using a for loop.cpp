#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number to print its multiplication table: ";
    cin >> num;
    
    cout << "Multiplication table of " << num << ":" << endl;
    
    // Using a for loop to print the multiplication table
    for (int i = 1; i <= 10; ++i) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}
