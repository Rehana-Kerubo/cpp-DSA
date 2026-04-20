// Write a program that asks a user to input the radius then the program calculates the 
// volume of a sphere (the formula for the volume is (4/3) πr3). Use the inbuilt 
// exponential function in C++ to compute (r3). 
#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

int main() {
    double radius, volume;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    volume = (4.0/3.0) * M_PI * pow(radius, 3);
    cout << "The volume of the sphere is: " << volume << endl;
    return 0;
}