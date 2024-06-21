#include <iostream>

using namespace std;

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
            // cout << a[i] << " and " << a[j] << endl;

            int divider = min(a[i], a[j]);

            int gcd = 1;

            while(divider > 1) {
                if(a[i] % divider == 0 && a[j] % divider == 0) {
                    gcd = divider;
                    break;
                }
                --divider;
            }

            max_gcd = max(max_gcd, gcd);
        }
    }

    cout << max_gcd << endl;

    return 0;
}