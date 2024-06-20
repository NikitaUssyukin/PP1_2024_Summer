#include <iostream>
#include <string> // you might need to include this library to work with strings

using namespace std;

int main() {
    string s;

    cin >> s;

    for(int i = 0; i < s.size(); ++i) {
        ++s[i];
    }

    cout << s << endl;

    return 0;
}