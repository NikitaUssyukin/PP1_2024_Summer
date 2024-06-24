#include <iostream>
#include <algorithm>

using namespace std;

int countEquals(int n, int a[], int b[]) {
    sort(a, a + n);
    sort(b, b + n);

    int cnt = 0;

    int i = 0, j = 0;

    while(i < n && j < n) {
        if(a[i] < b[j]) ++i;
        else if(a[i] > b[j]) ++j;
        else {
            ++i;
            ++j;
            ++cnt;
        }
    }

    return cnt;
}

int main() {
    int n;
    cin >> n;

    int a[n], b[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    cout << countEquals(n, a, b) << endl;

    return 0;
}