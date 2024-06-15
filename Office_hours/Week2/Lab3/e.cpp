#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) { // i = 0, 1, 2,.., n-1
        cin >> a[i];
    }

    int sum = 0;

    for(int i = 0; i < n; ++i) { // i = 0, 1, 2,.., n-1
        sum = sum + a[i];
        // 0
        // 0 + a[0]
        // 0 + a[0] + a[1]
        // ...
        // 0 + a[0] + a[1] + a[2] + ... + a[n - 1]
    }
    cout << sum << endl;





    return 0;
}