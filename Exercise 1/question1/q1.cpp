// Write a program that asks the user for the number of days. The program then prints 
// out the number of seconds in the number of days given. 
#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Enter the number of days: ";
    cin >> days;
    cout << "There are " << days * 24 * 60 * 60 << " seconds in " << days << " days." << endl;
    return 0;
}