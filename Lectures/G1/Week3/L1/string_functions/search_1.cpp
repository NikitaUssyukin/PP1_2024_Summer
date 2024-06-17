#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "The weather is too hot today.";

    cout << s.find("weather") << endl; // find "weather" in string s

    if(s.find("weather") != string::npos) {
        cout << "found" << endl;
    }
    else {
        cout << "not found" << endl;
    }

    cout << s.find(' ') << endl; // find ' ' in string s

    // loop to find all spaces within s
    int pos = 0;

    while(s.find(' ', pos) != string::npos) {
        pos = s.find(' ', pos);
        cout << pos << endl;
        pos += 1;
    }

    return 0;
}