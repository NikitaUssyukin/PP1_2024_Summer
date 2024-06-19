#include <iostream>
#include <algorithm>

using namespace std;

// comparator function
bool comparator(int a, int b) {
    return a > b;
}

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n, comparator);

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}