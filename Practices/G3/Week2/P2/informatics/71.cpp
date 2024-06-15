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

    cout << a[n - 1] << " ";

    for(int i = 0; i < n - 1; i += 1) {
        cout << a[i] << " ";
    }

    return 0;
}
