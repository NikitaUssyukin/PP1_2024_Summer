// EXCEEDS TIME-LIMIT

#include <iostream>

using namespace std;

int main() {
    int n, z;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cin >> z;

    z %= n;

    while(z != 0) {
        if(z > 0) {
            int last = a[n - 1];
            int previous = a[0];
            for(int i = 1; i < n; ++i) {
                int temp = a[i];
                a[i] = previous;
                previous = temp;
            }

            a[0] = last;

            --z;
        }
        else {
            int first = a[0];
            for(int i = 0; i < n - 1; ++i) {
                a[i] = a[i + 1];
            }

            a[n - 1] = first;

            ++z;
        }
    }
    
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}