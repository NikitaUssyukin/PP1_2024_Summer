#include <iostream>

using namespace std;

/*
conditional statements
if
else if
else 
*/

int main() {

    int a = 5;

    if (a > 5) {
        cout << "a is more than 5";
    } 
    else if (a < 5) {
        cout << "a is less than 5";
    }
    else {
        cout << "a is equal to 5";
    }

    return 0;
}