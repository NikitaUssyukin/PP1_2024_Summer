#include <iostream>
#include <climits>

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

    int secondMaximum = INT_MIN;
    bool secondMaximumFound = false;

    for(int i = 0; i < n; ++i) { // starts from 0 and goes up to n (number of rows)
        for(int j = 0; j < n; ++j) { // starts from 0 and goes up to n (number of columns)
            if(a[i][j] < maximum && a[i][j] > secondMaximum) {
                secondMaximum = a[i][j];
                secondMaximumFound = true;
            }
        }
    }

    if(!secondMaximumFound) {
        cout << 0 << endl;
    }
    else {
        cout << secondMaximum << endl;
    }
    
    return 0;
}