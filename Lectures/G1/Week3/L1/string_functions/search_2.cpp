#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "The weather is too hot today.";

    // loop to replace all spaces within s
    int pos = 0;

    while(s.find(' ', pos) != string::npos) {
        pos = s.find(' ', pos);
        s[pos] = '_';
        cout << pos << endl;
        pos += 1;
    }

    cout << s << endl;

    return 0;
}