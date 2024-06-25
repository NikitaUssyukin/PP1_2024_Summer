#include <iostream>
#include <sstream>

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
    string inputStr;

    getline(cin, inputStr);

    istringstream iss(inputStr);

    string s;

    while(iss >> s) {
        if(isTruth(s)) {
            cout << s << endl;
        }
    }

    return 0;
}