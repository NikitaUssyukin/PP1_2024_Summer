#include <iostream>

using namespace std;

long long fibonacci(int m, int n) {
    if(m == 1 || m == 2) return m - 1;
    return fibonacci(m - 1, n) + n * fibonacci(m - 2, n);
}

int main() {
    int m, n;
    cin >> n >> m;

    // for(int i = 1; i <= m; ++i) {
    //     cout << fibonacci(i, n) << " ";
    // }
    // cout << endl;
    cout << fibonacci(m, n) << endl;

    return 0;
}