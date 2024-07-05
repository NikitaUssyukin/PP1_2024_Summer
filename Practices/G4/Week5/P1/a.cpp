#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // int a[n][n];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            // cout << i << " " << j << "   ";
            if(i == 0 || j == 0) cout << i + j << " ";
            else if(i == j) cout << i * j << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }

    return 0;
}