#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    int n;
    cin >> n;

    cout << "m.empty(): " << m.empty() << endl;
    cout << "m.size(): " << m.size() << endl;

    for(int i = 0; i < n; ++i) {
        string s;

        cin >> s;

        cout << "key: " << s << ", value: " << m[s] << endl;
    }

    

    return 0;
}