#include <iostream>

using namespace std;

// arithmetic operators
int main() {
    double a, b;

    // +, -, *, /, %, 

    cin >> a >> b;

    cout << "a + b: " << a + b << endl;

    cout << "a - b: " << a - b << endl;

    cout << "a * b: " << a * b << endl;

    cout << "a / b: " << a / b << endl;

    // % doesnt work with decimal numbers (0.65, 2/3, etc)
    //cout << "a % b: " << a % b << endl;
    
    return 0;
}