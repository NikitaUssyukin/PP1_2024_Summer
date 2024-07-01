#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> m;

    for(int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;

        ++m[temp];
    }

    int cnt = 0;

    map<int, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        if(it->second >= 2) ++cnt;
        /* it->second - value of an element in a map */
    }

    cout << cnt << endl;

    return 0;
}