#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i) {
        int sum_row = 0;
        for(int j = 0; j < m; ++j) {
            sum_row += a[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << sum_row << endl;
    }

    for(int i = 0; i < m; ++i) {
        int sum_col = 0;
        for(int j = 0; j < n; ++j) {
            sum_col += a[j][i];
        }
        cout << "The sum of column number " << i + 1 << " is " << sum_col << endl;
    }


    return 0;
}

/*
3 4
1 2 4 6
2 5 7 3
1 4 5 94
*/