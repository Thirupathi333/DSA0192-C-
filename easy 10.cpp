#include <iostream>
using namespace std;

int main() {
    // Declare three variables to store the numbers
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Find the maximum of the three numbers using conditional statements
    int maxNum;
    if (num1 >= num2 && num1 >= num3) {
        maxNum = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        maxNum = num2;
    } else {
        maxNum = num3;
    }

    // Display the maximum number
    cout << "The maximum of the three numbers is: " << maxNum << endl;

    return 0;
}
