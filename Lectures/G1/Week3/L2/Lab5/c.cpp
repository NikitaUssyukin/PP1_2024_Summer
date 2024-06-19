#include <iostream>

using namespace std;

int main() {
    string s, f;
    cin >> s >> f;

    if(s.find(f) != string::npos) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}