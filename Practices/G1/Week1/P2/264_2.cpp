#include <iostream>

using namespace std;

int main() {

    int k;

    cin >> k;

    if(k >= 3 && k != 4 && k != 7) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}

// 0 1 2 - NO
// 4 7 - NO
// 3 5 6 8 9 10 11 12 13 14 15 16 17 18 19 20 - YES