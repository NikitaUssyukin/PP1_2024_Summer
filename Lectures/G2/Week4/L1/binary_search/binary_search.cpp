#include <iostream>

using namespace std;

void binarySearch(int n, int a[], int target) {
    int steps = 0;

    int l = 0, r = n - 1;

    while(l <= r) {
        ++steps; 

        int m = (l + r) / 2;

        if(target == a[m]) {
            cout << "Target found at index " << m;
            cout << " in " << steps << " steps\n";
            return;
        }
        else if(target > a[m]) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    cout << "Target not found, steps taken: " << steps << endl;
}

int main() {
    freopen("input.txt", "r", stdin);

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int target;
    cin >> target;

    binarySearch(n, a, target);

    return 0;
}