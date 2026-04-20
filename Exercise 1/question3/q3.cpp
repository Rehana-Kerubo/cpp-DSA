// Using functions, write a program to compute the area and perimeter of a square. 
// The program should ask the user to enter a number corresponding to the side length 
// of the square and display the area and perimeter of the square. 
#include <iostream>
using namespace std;
double area(double side) {
    return side * side;
}
double perimeter(double side) {
    return 4 * side;
}
int main() {
    double side;
    cout << "Enter the side length of the square: ";
    cin >> side;
    cout << "The area of the square is: " << area(side) << endl;
    cout << "The perimeter of the square is: " << perimeter(side) << endl;
    return 0;
}