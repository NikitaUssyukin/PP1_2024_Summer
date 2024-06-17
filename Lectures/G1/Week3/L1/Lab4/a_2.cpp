#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int cntLower = 0;
    int cntUpper = 0;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            cntUpper++;
        }
        else if(s[i] >= 'a' && s[i] <= 'z') {
            cntLower++;
        }
    }

    cout << cntLower << " " << cntUpper << endl;

    return 0;
}