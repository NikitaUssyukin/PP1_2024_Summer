#include <iostream>

using namespace std;

// bitwise operators
int main() {
    // bit - smallest piece of information
    // a bit can be either 1 or 0

    // 1 byte = 8 bits

    int a, b;

    cin >> a >> b;

    // << - bitwise shift left
    // 4 (dec), 0000 0000 0000 0000 0000 0000 0000 0100 (binary)
    // 4 << 1 = 8
    // 0100 << 1 = 0000 0000 0000 0000 0000 0000 0000 0100
    cout << "a << b: " << (a << b) << endl;

    // >> - bitwise shift right
    // 4 (dec), 0100 (binary)
    // 4 >> 1 = 2
    // 0100 >> 1 = 0010
    cout << "a >> b: " << (a >> b)<< endl;

    return 0;
}

/*
-2147483648 (dec), 1000 0000 0000 0000 0000 0000 0000 0000 (binary)

2147483648 (dec), 0111 1111 1111 1111 1111 1111 1111 1111 (binary)

*/