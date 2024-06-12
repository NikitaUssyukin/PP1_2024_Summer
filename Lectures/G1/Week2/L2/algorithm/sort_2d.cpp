#include <iostream>
#include <algorithm> // library for using 
// sort() and  reverse()

using namespace std;

/*
sort(first, last)

first - address (or iterator) of the first element
last - address (or iterator) of the last element (which is not included in the range)

[first, last) - including first element, but not including the last
*/

int main() {

    int n, m;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    // our sorting operation
    sort(*a, *(a + n));
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}