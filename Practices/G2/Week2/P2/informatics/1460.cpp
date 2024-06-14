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

    if(k >= 0) {
        for(int i = n - k; i < n; ++i) {
            cout << a[i] << " ";
        }

        for(int i = 0; i < n - k; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else {
        k = abs(k); // or k = -k
        for(int i = n - (n - k); i < n; ++i) {
            cout << a[i] << " ";
        }

        for(int i = 0; i < n - (n - k); ++i) {
            cout << a[i] << " ";
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