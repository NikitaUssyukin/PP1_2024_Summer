#include <iostream>

using namespace std;

int steps = 0;

void binarySearch(int n, int a[], int target, int l, int r) {

    if(l > r) {
        cout << "Target not found. Steps taken is " << steps << endl;
        steps = 0;
        return;
    }  // base case

    int m = (l + r) / 2;

    ++steps;

    if(target == a[m]) {
        cout << "Target found at index " << m;
        cout << " in " << steps << " steps.\n";
        steps = 0;
        return;
    }
    else if(target > a[m]) {
        binarySearch(n, a, target, m + 1, r);
    }
    else {
        binarySearch(n, a, target, l, m - 1);
    }
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

    binarySearch(n, a, target, 0, n - 1);

    return 0;
}