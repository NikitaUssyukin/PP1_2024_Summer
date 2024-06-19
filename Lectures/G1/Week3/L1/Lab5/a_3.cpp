#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int cntLower = 0;
    int cntUpper = 0;

    // islower(char)
    // isupper(char)

    for(int i = 0; i < s.size(); ++i) {
        if(isupper(s[i])) {
            cntUpper++;
        }
        else if(islower(s[i])) {
            cntLower++;
        }
    }

    cout << cntLower << " " << cntUpper << endl;

    return 0;
}