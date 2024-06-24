#include <iostream>
#include <string> // you might need to include this library to work with strings

using namespace std;

int main() {
    string s1 = "cat";

    string s2, s3;

    s3 = s2 = s1;

    cout << s1 << " " << s2 << " " << s3 << endl;

    s3[2] = s2[0] = 114; // ASCII of char 'r'

    cout << s1 << " " << s2 << " " << s3 << endl;

    return 0;
}