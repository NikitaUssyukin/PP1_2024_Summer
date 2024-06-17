#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Hello, KBTU!";

    int n = s.size();

    cout << "n: " << n << endl;

    for(int i = 0; i < n; ++i) {
        cout << s[i] << endl;
    } 

    return 0;
}