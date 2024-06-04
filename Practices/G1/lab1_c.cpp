#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Least Significant Bit (LSB), pow(2, 0)
    int a = N % 2;
    N /= 2; // same as N = N / 2;

    int b = N % 2;
    N /= 2; // same as N = N / 2;

    int c = N % 2;
    N /= 2; // same as N = N / 2;

    // Most Significant Bit (MSB), pow(2, 3) in this case
    int d = N % 2;
    N /= 2; // same as N = N / 2;

    cout << a * 8 + b * 4 + c * 2 + d * 1 << endl;

    return 0;
}

/*
IMPORTANT: In C++, ^ symbol represents XOR, not power.
To calculate power of some number, use pow() function from cmath

157 = 100 * 1 + 10 * 5 + 1 * 7
157 = 10^2 * 1 + 10^1 * 5 + 10^0 * 7

1111 = 2^3 * 1 + 2^2 * 1 + 2^1 * 1 + 2^0 * 1 = 15

157 % 10 = 7
157 / 10 = 15

15 % 10 = 5
15 / 10 = 1

1 % 10 = 1
1 / 10 = 0

11 % 2 = 1
11 / 2 = 5

5 % 2 = 1
5 / 2 = 2

2 % 2 = 0
2 / 2 = 1

1 % 2 = 1
1 / 2 = 0

1011 = 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 1
8 + 0 + 2 + 1 = 11
*/