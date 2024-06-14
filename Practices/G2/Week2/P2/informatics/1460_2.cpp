// INCOMPLETE SOLUTION

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, k;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cin >> k;

    k %= n; // k = k % n

    if(k >= 0) {
        for(int i = 0; i < n; ++i) {
            cout << a[(i + k - 1) % n] << " ";
            // i = 2 3 4 0 1
            // k = 3
            // n = 5
        }
        cout << endl;
    }
    else {
        k = abs(k);
        for(int i = 0; i < n; ++i) {
            cout << a[(i + k) % n] << " ";
            // i = 3 4 0 1 2
            // k = -3
            // n = 5
        }
        cout << endl;
    }
    

    return 0;
}

/*
input
5
5 3 7 4 6
3

output
7 4 6 5 3

a[5] = 5 3 7 4 6
  i  = 0 1 2 3 4

       7 4 6 5 3
  i  = 2 3 4 0 1

input
5
5 3 7 4 6
-3

output
4 6 5 3 7

a[5] = 5 3 7 4 6
  i  = 0 1 2 3 4

       4 6 5 3 7
  i  = 3 4 0 1 2

*/