#include <iostream>

using namespace std;

long long powerOf2(int n) {
    if(n == 0) return 1;
    return 2 * powerOf2(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << powerOf2(n) << endl;

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