#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    getline(cin, str);

    // Remove spaces and convert to lowercase
    string processedStr;
    for (size_t i = 0; i < str.length(); ++i) {
        if (!isspace(str[i])) {
            processedStr += tolower(str[i]);
        }
    }

    int i = 0, j = processedStr.length() - 1;

    while (i < j) {
        if (processedStr[i] != processedStr[j]) {
            isPalindrome = false;
            break;
        }
        ++i;
        --j;
    }

    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
