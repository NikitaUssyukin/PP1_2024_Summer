#include <iostream>
#include <algorithm>

using namespace std;

bool comparator(int a, int b) { // sorts 
    return a > b;               // in descending order
}

int main() {
    int n;
    cin >> n;

    int a[n];
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << "Before\n";
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    sort(a, a + n, comparator);

    cout << "After\n";
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}