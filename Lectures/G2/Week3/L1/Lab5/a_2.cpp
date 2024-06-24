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
            lowerCnt++;
        }
        else if(isupper(s[i])) {
            upperCnt++;
        }
    }

    cout << lowerCnt << " " << upperCnt << endl;

    return 0;
}