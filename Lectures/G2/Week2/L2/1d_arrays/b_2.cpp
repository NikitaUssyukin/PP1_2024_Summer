#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int b[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 1; i <= n; ++i) {
        b[i - 1] = a[n - i];
    }

    for(int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}