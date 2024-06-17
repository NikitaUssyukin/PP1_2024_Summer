/*
string functions - functions, that can be called using string object
(string object is a variable of string type)

*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    string s = "Hi";

    cout << "s.size(): " << s.size() << endl;
    cout << "s.length(): " << s.length() << endl;

    cout << "s.empty(): " << s.empty() << endl;
    s.clear();
    cout << "s.empty(), after s.clear(): " << s.empty() << endl;
    cout << "s.size(), after s.clear(): " << s.empty() << endl;
    cout << "int(s[0]), after s.clear(): " << int(s[0]) << endl;

    cout << "s.capacity(): " << s.capacity() << endl;
    cout << "s.max_size(): " << s.max_size() << endl;

    s += "Hello!";

    cout << "s.capacity(), after s += \"Hello!\": " << s.capacity() << endl;
    cout << "s.size(), after s += \"Hello!\": " << s.size() << endl;

    return 0;
}