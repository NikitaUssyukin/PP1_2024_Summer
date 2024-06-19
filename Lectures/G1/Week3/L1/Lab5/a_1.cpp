#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int cntLower = 0;
    int cntUpper = 0;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] >= 65 && s[i] <= 90) {
            cntUpper++;
        }
        else if(s[i] >= 97 && s[i] <= 122) {
            cntLower++;
        }
    }

    cout << cntLower << " " << cntUpper << endl;

    return 0;
}