#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        m[s]; // trying to access an element with the key s in out map m
    }

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    return 0;
}