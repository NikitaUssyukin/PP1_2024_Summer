#include <iostream>

using namespace std;

int main() {
    string subs, s;
    cin >> subs >> s;

    string test;

    while(test.size() < s.size()) {
        test += subs;
        if(test == s) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";

    return 0;
}