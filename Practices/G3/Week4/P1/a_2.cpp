#include <iostream>
#include <algorithm>

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

    if(z > 0) rotate(a, a + (n - z), a + n);
    else if(z < 0) rotate(a, a - z, a + n);

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}