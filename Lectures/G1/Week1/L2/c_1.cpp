#include <iostream>

using namespace std;

// bitwise operators
int main() {
    // bit - smallest piece of information
    // a bit can be either 1 or 0

    // 1 byte = 8 bits

    int a, b;

    cin >> a >> b;

    // & - bitwise and
    /*
    a b a&b
    0 0 0
    1 0 0
    0 1 0
    1 1 1
    */
    cout << "a & b: " << (a & b) << endl;

    // | - bitwise or
    /*
    a b a|b
    0 0 0
    1 0 1
    0 1 1
    1 1 1
    */
    cout << "a | b: " << (a | b) << endl;

    // ^ - bitwise xor
    /*
    a b a^b
    0 0 0
    1 0 1
    0 1 1
    1 1 0
    */
    cout << "a ^ b: " << (a ^ b) << endl;

    // ~ - bitwise not (inversion)
    /*
    a ~a
    0 1
    1 0
    */
    cout << "~a: " << ~a << endl;

    // << - bitwise shift left
    // 4 (dec), 0100 (binary)
    // 4 << 1 = 8
    // 0100 << 1 = 1000
    cout << "a << b: " << (a << b) << endl;

    // >> - bitwise shift right
    // 4 (dec), 0100 (binary)
    // 4 >> 1 = 2
    // 0100 >> 1 = 0010
    cout << "a >> b: " << (a >> b)<< endl;

    return 0;
}