#include <iostream>

using namespace std;

void binarySearch(int n, int a[], int target) {
    int steps = 0;

    int l = 0, r = n - 1;

    int m = r / 2;

    while(l <= r) {
        ++steps;

        if(target == a[m]) {
            cout << "Target found at index " << m;
            cout << " in " << steps << " steps.\n";
            return;
        }
        else if(target > a[m]) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }

        m = (l + r) / 2;
    }

    cout << "Target not found. Steps taken is " << steps << endl;
}

int main() {
    // uncomment the line below to take input from txt file
    // instead of the terminal
    // freopen("input.txt", "r", stdin);

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int target;
    cin >> target;

    int steps = 0;

    binarySearch(n, a, target);

    return 0;
}