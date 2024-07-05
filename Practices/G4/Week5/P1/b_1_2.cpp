#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    for(int i = 0; i < s.size(); ++i) {
        if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) {
            if(s[i] == 90) s[i] = 65;
            else if(s[i] == 122) s[i] = 97;
            else s[i] += 1;
        }
    }

    cout << s << endl;

    return 0;
}