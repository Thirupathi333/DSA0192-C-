#include <iostream>
#include <unordered_set>
using namespace std;

int sumOfSquares(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

bool isHappy(int num) {
    unordered_set<int> seen;
    while (num != 1 && seen.find(num) == seen.end()) {
        seen.insert(num);
        num = sumOfSquares(num);
    }
    return num == 1;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isHappy(num)) {
        cout << num << " is a happy number." << endl;
    } else {
        cout << num << " is not a happy number." << endl;
    }

    return 0;
}
