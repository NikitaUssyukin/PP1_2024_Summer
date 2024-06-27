#include <iostream>

using namespace std;

long long power(int num, int exponent) {
    if(exponent == 0) return 1;
    return num * power(num, exponent - 1);
}

int main() {
    int base, exp;
    cin >> base >> exp;

    cout << power(base, exp) << endl;

    return 0;
}

/*
2^n = 2 * 2^(n-1)

2^5 = 2 * 2^4
2^4 = 2 * 2^3
2^3 = 2 * 2^2
2^2 = 2 * 2^1
2^1 = 2 * 2^0
2^0 = 1
*/