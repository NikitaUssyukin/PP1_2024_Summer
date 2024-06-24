#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;

    int lowerCnt = 0;
    int upperCnt = 0;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            lowerCnt++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z') {
            upperCnt++;
        }
    }

    cout << lowerCnt << " " << upperCnt << endl;

    return 0;
}