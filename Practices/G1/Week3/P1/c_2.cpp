#include <iostream>

using namespace std;

int main() {
    string s;
    string maxString;
    string currentString;

    getline(cin, s);

    for(int i = 0; i < s.size(); i++) {
        if(s[i] != ' ') {
            currentString += s[i];
            // cout << currentString << endl;
        }
        else {
            if(maxString.size() < currentString.size()) {
                maxString = currentString;
            }
            currentString.clear();
        } 
        // cout << "maxString: " << maxString << endl;
        // cout << "---------------\n";
    }

    cout << maxString << endl;

    return 0;
}