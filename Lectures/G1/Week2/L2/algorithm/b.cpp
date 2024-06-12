#include <iostream>
#include <algorithm> 

using namespace std;

// Sort elements on l...r
// similar to Lab3 I

int main() {

    int n, l, r;
    cin >> n >> l >> r;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // our sorting operation
    sort(a + l - 1, a + r);
    
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}