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

    // bits in straight order:
    // d c b a

    // bits in reversed order:
    // a b c d

    cout << 8 * a + 4 * b + 2 * c + 1 * d << endl;

    return 0;
}