#include <iostream>

using namespace std;

int main() {
    string s;

    cin >> s;

    bool valid = true;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] >= '0' && s[i] <= '9') {
            valid = false;
            break;
        }
    }

    if(valid) {
        cout << "Valid username\n";
    }
    else {
        cout << "Wrong username\n";
    }

    return 0;
}