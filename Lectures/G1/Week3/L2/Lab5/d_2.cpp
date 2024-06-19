#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s1, s2;

    cin >> s1;

    s2 = s1;

    reverse(s2.begin(), s2.end());

    bool isPalindrome = (s1 == s2);

    if(isPalindrome) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

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