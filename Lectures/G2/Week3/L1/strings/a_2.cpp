#include <iostream>
#include <string> // you might need to include this library to work with strings

using namespace std;

int main() {
    string s = "Hello, KBTU!";

    cout << s << endl;

    for(int i = 0; i < s.size(); ++i) {
        cout << s[i] << endl;
    }

    return 0;
}