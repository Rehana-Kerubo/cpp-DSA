// The following is pseudocode for a program being designed. Write the C++ program 
// equivalent of the same. 
// BEGIN 
// SET x TO 0, y TO 20  
// REPEAT 
// SUBTRACT 4 FROM y 
// ADD 2/y TO x 
// UNTIL 
// y IS LESS THAN 6 
// DISPLAY x 
// END 

#include <iostream>
using namespace std;
int main() {
    int x = 0, y = 20;
    while (y >= 6) {
        y -= 4;
        x += 2/y;
    }
    cout << x << endl;
    return 0;
}
