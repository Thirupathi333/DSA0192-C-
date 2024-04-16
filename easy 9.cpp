#include <iostream>
using namespace std;

int main() {
    // Declare variables to store length and width
    float length, width;

    // Prompt the user to enter the length and width of the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate the area of the rectangle
    float area = length * width;

    // Display the calculated area
    cout << "The area of the rectangle with length " << length << " and width " << width << " is: " << area << endl;

    return 0;
}
