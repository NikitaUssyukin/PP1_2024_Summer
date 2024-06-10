#include <iostream>

using namespace std;

/*
2d-array is an array, where each element
is a 1d-array

you can think about 2d arrays as matricies
i.e. that they have rows and columns
usually, we use "i" for rows (1d-arrays within 2d-array)
and "j" for columns (individual elements of 2d-arrays)

e.g.:

1 2 3
4 5 6
7 8 9

this 2d array has 3 rows and 3 columns
in other words, it consists of
3 1d-arrays, each of which contains 3 elements

if we want to get the first element of the second row (number 4 in this case)
we will use indexes:
i = 1, j = 0
*/

int main() {
    int n, m; // n - number of rows
    // m - number of columns
    cin >> n >> m;

    int a[n][m];

    // taking input
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    // making output
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}