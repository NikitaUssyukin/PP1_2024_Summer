#include <iostream>

using namespace std;

int main() {
    string s;
    string maxString;

    int maxSize = 0;

    while(cin >> s) {
        if(s == "-1") break;
        if(maxSize < s.size()) {
            maxString = s;
            maxSize = s.size();
        };
    }

    cout << maxString << endl;

    return 0;
}