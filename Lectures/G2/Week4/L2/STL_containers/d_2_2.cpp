#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string s;
        int x;
        cin >> x >> s;
        m[x] = s;
    }

    map<int, string>::iterator it;
    
    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->second << " " << it->first << endl;
    }
    cout << endl;

    return 0;
}