#include <iostream>
#include <string> // you might need to include this library to work with strings

using namespace std;

int main() {
    // string mistakes examples
    // string s1 = 'a'; // we cannot assign a character to a newly created string
    // correct way to do it:
    string s1 = "a";

    // however, we can create an empty string and then assign a char to it
    string s2;
    s2 = 'a';

    // string s3 = 123; // we cannot assign a number to a string
    // correct way to do it:
    string s3 = "123";

    // do not enclose strings in single quotes - this creates a char 
    // and a char can have only 1 symbol
    string s4 = 'hello';
    // correct way to do it:
    string s4 = "hello";

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;

    return 0;
}