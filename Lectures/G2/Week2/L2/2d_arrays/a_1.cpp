#include <iostream>

using namespace std;

/*
2D array declaration

data_type array_name[number_of_rows][number_of_columns]

where

number_of_rows represents the number of 1D arrays whithin the 2D array

number_of_columns represents the number of elements of the data type data_type 
within each 1D array

*/

int main() {
    int n;
    cin >> n;
    int a[n][n];

    for(int i = 0; i < n; ++i) { // starts from 0 and goes up to n (number of rows)
        for(int j = 0; j < n; ++j) { // starts from 0 and goes up to n (number of columns)
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i) { // starts from 0 and goes up to n (number of rows)
        for(int j = 0; j < n; ++j) { // starts from 0 and goes up to n (number of columns)
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
n = 3
    i
j       0 1 2

    0   1 2 3
    1   4 5 6
    2   7 8 9


*/