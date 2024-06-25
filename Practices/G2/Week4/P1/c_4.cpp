#include <iostream>

using namespace std;

int main() {
    string s;

    cin >> s;

    string digits = "0123456789";

    for(int i = 0; i < s.size(); ++i) {
        if(digits.find(s[i]) != string::npos) {
            cout << "Wrong username\n";
            return 0;
        }
    }

    cout << "Valid username\n";

    return 0;
}