// Write a program using functions that determines whether a character input by a 
// user is uppercase or lower case.

#include <iostream>
using namespace std;
bool isUpperCase(char c) {
    return c >= 'A' && c <= 'Z';
}
int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if (isUpperCase(c)) {
        cout << c << " is an uppercase letter." << endl;
    } else {
        cout << c << " is a lowercase letter." << endl;
    }
    return 0;
}