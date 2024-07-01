#include <iostream>
#include <map>

using namespace std;

void printMapInfo(map<string, int> m, int i, int n) {
    cout << "\n----------\n";
    cout << "i: " << i << endl;
    cout << "i < n: " << (i < n) << endl;
    cout << "----------\n";
    cout << "All elements in our map:\n";
    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
    cout << "----------\n";
}

int main() {
    map<string, int> m;

    int n;
    cin >> n;

    for(int i = 0;; ++i) {
        // here
        // output code
        printMapInfo(m, i, n);
        // end of output code

        if(i >= n) break; // loop break condition

        string s;

        cin >> s;

        m[s];
    }

    

    return 0;
}