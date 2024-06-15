#include <iostream>
#include <algorithm>

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

    sort(*a, *(a + n));

    int maximum = a[n - 1][n - 1];

    int secondMaximum;
    bool secondMaximumFound = false;

    for(int i = n - 1; i >= 0; --i) { 
        for(int j = n - 1; j >= 0; --j) { 
            if(a[i][j] < maximum) {
                secondMaximum = a[i][j];
                secondMaximumFound = true;
                break;
            }
        }
        if(secondMaximumFound) {
            break;
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