/*
IMPORTANT: ^ sympol in C++ represents XOR operation
^ is used here only for demonstration purposes
for power use pow() function
e.g.: pow(base, power)
2^3 => pow(2, 3)

127 = 100 * 1 + 10 * 2 + 1 * 7
      10^2 * 1 + 10^1 * 2 + 10^0 * 7

1101 = 2^3 * 1 + 2^2 * 1 + 2^1 * 0 + 2^0 * 1
       8 * 1 + 4 * 1 + 2 * 0 + 1 * 1 = 13

11 % 2 = 1
11 / 2 = 5

5 % 2 = 1
5 / 2 = 2

2 % 2 = 0
2 / 2 = 1

1 % 2 = 1
1 / 2 = 0

1011(in binary) = 11(in decimal)

37 decimal to hex

37 % 16 = 5
37 / 16 = 2

2 % 16 = 2
2 / 16 = 0

37 from decimal to hex = 25

25 hex to decimal:
16^1 * 2 + 16^0 * 5 = 16 * 2 + 1 * 5 = 37
*/

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int a = N % 2;
    N /= 2; // same as N = N / 2;

    int b = N % 2;
    N /= 2;

    int c = N % 2;
    N /= 2;

    int d = N % 2;
    N /= 2;

    cout << a * 8 + b * 4 + c * 2 + d * 1 << endl;

    return 0;
}