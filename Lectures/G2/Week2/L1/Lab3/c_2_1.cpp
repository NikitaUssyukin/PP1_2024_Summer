#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; 

    int a[n];

    for(int i = 0; i < n; i = i + 1) {
        cin >> a[i];
    }

    int maximum = a[0];

    for(int i = 0; i < n; i = i + 1) {
        maximum = max(maximum, a[i]);
    }
    cout << maximum << endl;

    return 0;
}