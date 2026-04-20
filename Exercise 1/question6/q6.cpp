// Write a C++ program that does the following: 
// i. Uses a loop for a user to continually input 5 values to populate an array.
// ii. Calculates and displays the average of the values input into the array.
 
#include <iostream>
using namespace std;

int main() {
    double values[5], sum = 0.0, average = 0.0;
    for (int i = 0; i < 5; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];
        sum += values[i];
    }
    average = sum / 5;
    cout << "Average: " << average << endl;
    return 0;
}