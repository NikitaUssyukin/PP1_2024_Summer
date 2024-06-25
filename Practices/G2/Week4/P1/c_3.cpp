#include <iostream>

using namespace std;

int main() {
    string s;

    cin >> s;

    int digitCnt = 0;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] >= '0' && s[i] <= '9') {
            ++digitCnt;
            // break;
        }
    }

    if(digitCnt == 0) {
        cout << "Valid username\n";
    }
    else {
        cout << "Wrong username\n";
    }

    return 0;
}