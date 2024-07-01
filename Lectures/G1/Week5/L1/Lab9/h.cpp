#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> m;

    for(int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;

        if(m[temp] == 0) m[temp] = i + 1;
    }

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}