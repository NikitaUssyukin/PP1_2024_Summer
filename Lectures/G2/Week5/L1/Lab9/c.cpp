#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> m;
    // key - represents individual numbers
    // value under the key - how many times the number
    // represented by the key occured in the input

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        ++m[x]; // incrementing the value under the key x
    }

    int cnt = 0;

    map<int, int>::iterator it;
    /* uncomment the code below to see the contents of the map */
    // cout << "contents of the map:\n";
    // for(it = m.begin(); it != m.end(); ++it) {
    //     cout << it->first << " " << it->second << endl;
    // }
    // cout << endl;
    
    for(it = m.begin(); it != m.end(); ++it) {
        if(it->second >= 2) ++cnt;
    }

    cout << cnt << endl;

    return 0;
}