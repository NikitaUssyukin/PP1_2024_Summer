#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;

    int lowerCnt = 0;
    int upperCnt = 0;

    for(int i = 0; i < s.size(); ++i) {
        if(islower(s[i])) {
            s[i] = s[i] - ('a' - 'A');
        }
    }

    cout << s << endl;

    return 0;
}