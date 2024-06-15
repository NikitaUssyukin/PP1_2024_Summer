#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 1; i <= n; ++i) { // i = 1, 2, .., n
        cout << a[n - i] << " ";
        // a[n - 1], a[n - 2], .., a[n - n]
        // assume n = 3 
        // a[3 - 1], a[3 - 2], a[3 - 3]
        // a[2], a[1], a[0]
    }

    return 0;
}