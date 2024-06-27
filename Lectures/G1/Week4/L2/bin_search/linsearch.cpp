#include <iostream>

using namespace std;

void linearSearch(int n, int a[], int target) {
    int steps = 0;

    for(int i = 0; i < n; ++i) {
        ++steps;
        if(a[i] == target) {
            cout << "Target found at index " << i;
            cout << " in " << steps << " steps.\n";
            return;
        }

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

    linearSearch(n, a, target);

    return 0;
}