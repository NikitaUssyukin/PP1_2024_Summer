#include <iostream>

using namespace std;

/*
conditional statements
if
else if
else 
*/

int main() {

    int a, b;

    cin >> a >> b;

    if (a > b) {
        cout << a << " is more than " << b << endl;
    } 
    if (a < b) {
        cout << a << " is less than " << b << endl;
    }
    if (a == b) {
        cout << a << " is equal to " << b << endl;
    }

    return 0;
}