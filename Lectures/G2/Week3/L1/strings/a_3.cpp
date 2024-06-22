#include <iostream>
#include <string> // you might need to include this library to work with strings

using namespace std;

int main() {
    string s = "Hello, KBTU!";

    cout << s << endl;

    for(int i = 0; i < s.size(); ++i) {
        cout << "ASCII: " << int(s[i]) << ", char: " << s[i] << endl;
        // (int)s[i] is the same as int(s[i])
    }

    return 0;
}