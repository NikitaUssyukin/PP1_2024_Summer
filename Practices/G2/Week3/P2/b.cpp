#include <iostream>

using namespace std;

int main() {
    string s;
    int i, j;

    cin >> s;
    cin >> i >> j;

    for(int k = i - 1, l = j - 1; k < l; ++k, --l) {
        // cout << k << " " << l << endl;
        swap(s[k], s[l]);
    }

    cout << s << endl;

    return 0;
}