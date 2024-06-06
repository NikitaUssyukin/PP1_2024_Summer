#include <iostream>

using namespace std;

/*
arithmetic operations

+
-
*
/
%

*/

int main() {
    double a, b;
    
    cin >> a >> b;

    cout << "a + b: " << a + b << endl;

    cout << "a - b: " << a - b << endl;

    cout << "a * b: " << a * b << endl;

    cout << "a / b: " << a / b << endl;

    // cannot use modulo with double
    // cout << "a % b: " << a % b << endl;

    return 0;
}