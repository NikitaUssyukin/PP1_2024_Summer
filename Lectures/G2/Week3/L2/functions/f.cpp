#include <iostream>

using namespace std;

void arrayMultiply(int n, int a[], int multiplier) {
    for(int i = 0; i < n; ++i) {
        a[i] *= multiplier;
    }
}

int main() {
    int n;
    cin >> n;

    int a[n];
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int multiplier;
    cin >> multiplier;


    cout << "Before\n";
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    arrayMultiply(n, a, multiplier);
    // i.e., you can think of it this way
    // arrayMultiply(int n = n, int a[] = a, int multiplier = multiplier)

    cout << "After\n";
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}