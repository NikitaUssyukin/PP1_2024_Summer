#include <iostream>

using namespace std;

int main() {

    int k;

    cin >> k;

    if(k < 3) {
        cout << "NO\n";
        return 0;
    }

    if(k % 3 == 0 || k % 5 == 0) {
        cout << "YES\n";
        return 0;
    }

    k %= 20;

    if(k == 1 || k % 3 == 0 || k % 3 == 2 || k % 5 == 0 || k % 5 == 3) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}