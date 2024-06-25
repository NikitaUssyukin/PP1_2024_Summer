#include <iostream>

using namespace std;

bool isTruth(string s) {
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] >= '0' && s[i] <= '9') {
            return false;
        } 
    }

    return true;
}

int main() {
    string s;

    while(cin >> s) {
        if(isTruth(s)) {
            cout << s << endl;
        }
    }

    return 0;
}