#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;

    int lowerCnt = 0;
    int upperCnt = 0;

    for(int i = 0; i < s.size(); ++i) {
        // cout << toupper(s[i]) << " ";
        s[i] = toupper(s[i]);
    }

    cout << s << endl;

    return 0;
}