// VERY SUB-OPTIMAL SOLUTION

#include <iostream>

using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string s;
        cin >> s;

        if(s.size() <= 10) continue;

        for(int i = 0; i < s.size() - 9; ++i) {
            if(s[i] == '@' && s[i + 1] == 'g' && s[i + 2] == 'm' && s[i + 3] == 'a' && s[i + 4] == 'i'
            && s[i + 5] == 'l' && s[i + 6] == '.' && s[i + 7] == 'c' && s[i + 8] == 'o' && s[i + 9] == 'm') {
                for(int j = 0; j < s.size() - 10; ++j) {
                    cout << s[j];
                }
                cout << endl;
            }
        }
    }

    return 0;
}