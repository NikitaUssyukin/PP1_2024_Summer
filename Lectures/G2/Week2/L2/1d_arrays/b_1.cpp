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

    for(int i = n - 1, j = 0; i >= 0 && j < n; --i, ++j) {
        b[j] = a[i];
    }

    for(int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}