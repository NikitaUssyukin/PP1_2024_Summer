#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    bool isSymmetric = true;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(a[i][j] != a[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if(!isSymmetric) {
            break;
        }
    }

    if(isSymmetric) {
        cout << "yes\n";
    }
    else {
        cout << "no\n";
    }

    return 0;
}