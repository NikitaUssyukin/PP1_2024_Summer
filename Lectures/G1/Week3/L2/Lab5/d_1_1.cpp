#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;

    int n = s.size();
    for(int i = 0; i < n / 2; ++i) {
        if(s[i] != s[n - 1 - i]) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}

/*
s  =  abba
i  =  0123

n = s.size() = 4

n / 2 = 2

i = 0
s[i] != s[n - 1 - i]
s[0] != s[3 - 0]
a != a  -  false

i = 1
s[i] != s[n - 1 - i]
s[1] != s[3 - 1]
b != b  -  false

*/