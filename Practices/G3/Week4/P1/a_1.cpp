#include <iostream>

using namespace std;

int main() {
    int n, z;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cin >> z;

    z %= n;

    if(z == 0) {
        for(int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        return 0;
    }
    else if(z > 0) {
        for(int i = n - z; i < n; ++i) {
            cout << a[i] << " ";
        }
        for(int i = 0; i < n - z; ++i) {
            cout << a[i] << " ";
        }
    }
    else {
        for(int i = (-z); i < n; ++i) {
            cout << a[i] << " ";
        }
        for(int i = 0; i < (-z); ++i) {
            cout << a[i] << " ";
        }
    }

    return 0;
}