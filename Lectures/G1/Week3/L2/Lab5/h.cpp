#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;

    int n = 10;

    int digit_counters[n] = {};

    for(int i = 0; i < s.size(); ++i) {
        ++digit_counters[s[i] - '0'];
    }

    int count = -1;

    for(int i = 0; i < n; ++i) {
        if(digit_counters[i] == 0) continue;
        if(count == -1) {
            count = digit_counters[i];
            continue;
        }
        if(count != digit_counters[i]) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    // cout << "digit_counters: ";

    // for(int i = 0; i < n; ++i) {
    //     cout << digit_counters[i] << " ";
    // }
    // cout << endl;

    // cout << "i             : ";
    // for(int i = 0; i < n; ++i) {
    //     cout << i << " ";
    // }
    // cout << endl;

    return 0;
}