#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int k;

    cin >> s >> k;

    for(int i = 0; i < s.size(); ++i) {
        s[i] -= k;
        if(s[i] < 'A') {
            s[i] = 'Z' - ('A' - s[i] - 1);
        }
    }

    cout << s << endl;

    return 0;
}