#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;

    int lowerCnt = 0;
    int upperCnt = 0;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] >= 97 && s[i] <= 122) {
            lowerCnt++;
        }
        else if(s[i] >= 65 && s[i] <= 90) {
            upperCnt++;
        }
    }

    cout << lowerCnt << " " << upperCnt << endl;

    return 0;
}