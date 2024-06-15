#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i += 1) {
        cin >> a[i];
    }

    int maximum = INT_MIN;
    int minimum = INT_MAX; 

    for(int i = 0; i < n; i += 1) {
        maximum = max(maximum, a[i]);
        minimum = min(minimum, a[i]);
    }

    for(int i = 0; i < n; i += 1) {
        if(a[i] == maximum) {
            a[i] = minimum;
        }
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
