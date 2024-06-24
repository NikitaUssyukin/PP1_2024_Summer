#include <iostream>
#include <algorithm>

using namespace std;

string validString2(string s, int n) {
    int maxLength = 0;
    int curLength = 0;

    for(int i = 0; i < s.size(); ++i) {
        if(isdigit(s[i])) {
            ++curLength;
            maxLength = max(maxLength, curLength);
        }
        else {
            curLength = 0;
        }
    }

    if(maxLength >= n) {
        return "Valid";
    }
    else {
        return "Not valid";
    }
}

int main() {
    string s;
    cin >> s;

    int n;
    cin >> n;

    cout << validString2(s, n) << endl;

    return 0;
}