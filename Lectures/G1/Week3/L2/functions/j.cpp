#include <iostream>

using namespace std;

int sum_of_2d_array(int n, int m, int a[][1000]) {

    int sum = 0;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            sum += a[i][j];
        }
    }

    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][1000];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    cout << sum_of_2d_array(n, m, a) << endl;

    return 0;
}