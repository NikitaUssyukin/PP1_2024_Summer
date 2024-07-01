#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string s;
        int x;

        cin >> s >> x;

        m[s] = x;
    }

    int amountOfRequests;
    cin >> amountOfRequests;

    for(int i = 0; i < amountOfRequests; ++i) {
        string s;

        cin >> s;

        if(m.find(s) != m.end()) {
            cout << "Element with the key " << s << " found ";
            cout << "with value of " << m[s] << endl;
        }
        else {
            cout << "Element with the key " << s << " not found\n";
        }
    }

    cout << "\n----------\n";
    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
    cout << "----------\n";

    return 0;
}