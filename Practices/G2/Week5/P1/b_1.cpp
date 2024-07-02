#include <iostream>

using namespace std;

int gcd(int a, int b) {
    int greatestCommonDivisor;
    greatestCommonDivisor = min(a, b);
    while(greatestCommonDivisor > 1) {
        if(a % greatestCommonDivisor == 0 && b % greatestCommonDivisor == 0) return greatestCommonDivisor;
        --greatestCommonDivisor;
    }
    return greatestCommonDivisor;
}

int main() {
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max_gcd = 1;

    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            // cout << a[i] << " " << a[j] << endl;
            int current_gcd = gcd(a[i], a[j]);
            max_gcd = max(current_gcd, max_gcd);
        }
    }

    cout << max_gcd << endl;

    return 0;
}