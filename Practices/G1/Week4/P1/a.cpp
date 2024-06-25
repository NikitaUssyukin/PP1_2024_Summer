#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    int counterArraySize = 1001;

    int b[counterArraySize] = {};

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        ++b[a[i]];
    }

    int maxCnt = 0;

    for(int i = 0; i < counterArraySize; ++i) {
        maxCnt = max(maxCnt, b[i]);
    }

    for(int i = counterArraySize - 1; i >= 0; --i) {
        if(b[i] == maxCnt) cout << i << " ";
    }
    cout << endl;

    return 0;
}