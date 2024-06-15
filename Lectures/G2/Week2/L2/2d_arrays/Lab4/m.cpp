#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n];

    int cnt = 1;

    int x = 0;
    int y = n - 1;

    while(x <= y) {
    // I.
        // 1)
        for(int i = x, j = x; j <= y; j++) {
            a[i][j] = cnt++;
        } 

        // 2)
        for(int i = x + 1, j = y; i <= y; i++) {
            a[i][j] = cnt++;
        }

        // 3)
        for(int i = y, j = y - 1; j >= x; j--) {
            a[i][j] = cnt++;
        }

        // 4)
        for(int i = y - 1, j = x; i > x; i--) {
            a[i][j] = cnt++;
        }

    // II.
        // 1)
        x++;
        y--;
    }

    for(int i = 0; i < n; ++i) { 
        for(int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}