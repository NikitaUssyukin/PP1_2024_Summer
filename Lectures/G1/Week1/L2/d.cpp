#include <iostream>

using namespace std;

// logical operators
int main() {
    
    bool a, b;

    cin >> a >> b;

    // logical and - &&
    cout << "a && b: " << (a && b) << endl;

    // logical or - ||
    cout << "a || b: " << (a || b)<< endl;

    // logical not - !
    cout << "!a : " << !a << endl;

    return 0;
}

