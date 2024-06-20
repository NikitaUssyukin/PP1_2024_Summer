#include <iostream>
#include <string> // you might need to include this library to work with strings

using namespace std;

/*
string can be thought of as an array of characters

each individual element of a string is a char

meaning it has ASCII code and all corresponding properties
*/

int main() {
    string s = "Hello, KBTU!";

    cout << s << endl;

    int n = s.size();

    cout << n << endl;

    for(int i = 0; i < n; ++i) {
        cout << s[i] << endl;
    }

    return 0;
}