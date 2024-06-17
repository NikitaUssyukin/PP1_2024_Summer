#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Hello, KBTU!";

    string a = "H";

    int n = s.size();

    cout << "n: " << n << endl;

    for(int i = 0; i < n; ++i) {
        cout << "ASCII code: " << int(s[i]) << ", ";
        cout << "char: " << s[i] << endl;
    } 

    return 0;
}