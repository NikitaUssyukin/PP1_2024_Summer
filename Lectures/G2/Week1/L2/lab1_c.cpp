#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int a, b, c, d; // variables to store our bits

    a = N % 2;
    N /= 2; // same as N = N / 2

    b = N % 2;
    N /= 2;

    c = N % 2;
    N /= 2;

    d = N % 2;
    N /= 2;

    cout << a * 8 + b * 4 + c * 2 + d * 1;

    return 0;
}