#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n];

    for(int i = 0; i < n; ++i) { // starts from 0 and goes up to n (number of rows)
        for(int j = 0; j < n; ++j) { // starts from 0 and goes up to n (number of columns)
            cin >> a[i][j];
        }
    }

    int maximum = a[0][0];

    for(int i = 0; i < n; ++i) { // starts from 0 and goes up to n (number of rows)
        for(int j = 0; j < n; ++j) { // starts from 0 and goes up to n (number of columns)
            maximum = max(maximum, a[i][j]);
        }
    }

    cout << maximum << endl;

    return 0;
}