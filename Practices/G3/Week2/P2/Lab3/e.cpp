#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i += 1) {
        cin >> a[i];
    }

    long long sum = 0;

    for(int i = 0; i < n; i += 1) {
        sum += a[i];
    }

    cout << sum << endl;

    return 0;
}
