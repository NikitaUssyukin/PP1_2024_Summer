#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    int n;
    cin >> n;

    for(int i = 0;; ++i) {
        // output code
        cout << "----------\n";
        cout << "All elements in our map:\n";
        map<string, int>::iterator it;
        for(it = m.begin(); it != m.end(); ++it) {
            cout << it->first << " " << it->second << endl;
        }
        cout << "----------\n";
        // end of output code

        if(i >= n) break;

        string s;

        cin >> s;

        m[s];
    }

    

    return 0;
}