#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int k[n];

    for(int i = 0; i < n; ++i) {
        cin >> k[i];
    }

    int a[n], b[n], c[n];

    for(int i = 0; i < n; ++i) {
        a[i] = k[i] | (k[i] + 1);

        b[i] = k[i] & (k[i] + 2);

        c[i] = k[i] ^ (k[i] + 3);
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n; ++i) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}