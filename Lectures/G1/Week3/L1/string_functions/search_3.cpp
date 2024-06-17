#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "The weather is too hot today.";

    // loop to erase all spaces within s
    int pos = 0;

    while(s.find(' ', pos) != string::npos) {
        pos = s.find(' ', pos);
        s.erase(pos, 1);
        cout << pos << endl;
        pos += 1;
    }

    cout << s << endl;

    return 0;
}