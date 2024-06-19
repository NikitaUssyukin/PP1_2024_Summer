#include <iostream>
#include <algorithm>

using namespace std;

// comparator function
bool comparator(int a, int b) {
    if(a % 2 == b % 2) {
        return a < b;
    }
    else {
        if(a % 2 == 0) {
            return true;
        }
        else {
            return false;
        }
    }
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