#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2, s3;

    // cin >> s;
    getline(cin, s1, ','); // ',' used as a delimiter
    getline(cin, s2, ',');
    getline(cin, s3);

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    
    return 0;
}