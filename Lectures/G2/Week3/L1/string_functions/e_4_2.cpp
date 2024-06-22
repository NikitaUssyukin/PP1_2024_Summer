#include <iostream>
#include <string>

using namespace std;


int main() {
    string s = "The weather is too hot";

    int pos = 0;

    while(s.find(' ', pos) != string::npos) {
        pos = s.find(' ', pos);
        // cout << pos << endl;
        s.erase(pos, 1);
        s[pos] = toupper(s[pos]);
        pos += 1;
    }

    cout << s << endl;

    return 0;
}