#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    for(int i = 0; i < s.size(); ++i) {
        if(isalpha(s[i])) {
            if(s[i] == 'Z' || s[i] == 'z') s[i] -= ('Z' - 'A');
            else s[i] += 1;
        }
    }

    cout << s << endl;

    return 0;
}