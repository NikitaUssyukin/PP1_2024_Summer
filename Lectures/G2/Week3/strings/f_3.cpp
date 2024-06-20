#include <iostream>
#include <string> // you might need to include this library to work with strings

using namespace std;

int main() {
    string s;

    cin >> s;

    for(int i = 0; i < s.size(); ++i) {
        s[i] += ('a' - 'A'); // Uppercase to lowercase
        // ('a' - 'A') is a difference in ASCII between lowercase and uppercase letter A
        // ASCII of 'a' is 97
        // ASCII of 'A' is 65
        // 97 - 65 = 32 
    }

    cout << s << endl;

    return 0;
}