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

    if (a >= b) {
        cout << a << " is more than or equal to " << b << endl;
    } 
    else {
        cout << a << " is less than or equal to " << b << endl;
    }

    return 0;
}