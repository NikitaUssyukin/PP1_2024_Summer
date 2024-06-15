#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i += 1) {
        cin >> a[i];
    }

    rotate(a, a + n - 1, a + n);


    for(int i = 0; i < n; i += 1) {
        cout << a[i] << " ";
    }

    return 0;
}
