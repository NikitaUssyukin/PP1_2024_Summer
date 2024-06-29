#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); ++i) {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            cout << s[i];
        }
    }

    cout << endl;

    return 0;
}