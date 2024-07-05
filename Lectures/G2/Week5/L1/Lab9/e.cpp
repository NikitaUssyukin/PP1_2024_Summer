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

        ++m[s]; // incrementing the value under the key x
    }

    int cnt = 0;

    map<string, int>::iterator it;
    /* uncomment the code below to see the contents of the map */
    // cout << "contents of the map:\n";
    // for(it = m.begin(); it != m.end(); ++it) {
    //     cout << it->first << " " << it->second << endl;
    // }
    // cout << endl;
    
    for(it = m.begin(); it != m.end(); ++it) {
        if(it->second == 3) ++cnt;
    }

    cout << cnt << endl;

    return 0;
}