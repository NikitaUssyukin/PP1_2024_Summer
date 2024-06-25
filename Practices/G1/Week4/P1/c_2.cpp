#include <iostream>

using namespace std;

void fillArrays(int i, int n, int k[], int a[], int b[], int c[]) {
    if(i >= n) return;

    a[i] = k[i] | (k[i] + 1);

    b[i] = k[i] & (k[i] + 2);

    c[i] = k[i] ^ (k[i] + 3);

    fillArrays(++i, n, k, a, b, c);
}

int main() {
    int n;
    cin >> n;

    int k[n];

    for(int i = 0; i < n; ++i) {
        cin >> k[i];
    }

    int a[n], b[n], c[n];

    fillArrays(0, n, k, a, b, c);

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