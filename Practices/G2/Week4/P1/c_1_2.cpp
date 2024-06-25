#include <iostream>

using namespace std;

int main() {
    string s;

    cin >> s;

    for(int i = 0; i < s.size(); ++i) {
        if(isdigit(s[i])) {
            cout << "Wrong username\n";
            return 0;
        }
    }

    cout << "Valid username\n";

    return 0;
}