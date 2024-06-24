#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    int arraySize = 10;
    int a[arraySize] = {}; // this works only when the array size 
                           // is known before compilation

    for(int i = 0; i < s.size(); ++i) {
        ++a[s[i] - '0'];
    }

    // for(int i = 0; i < arraySize; ++i) {
    //     cout << "Counter of " << i << ": " << a[i] << endl;
    // }

    int cnt = -1; // -1 to indicate that cnt is not set

    for(int i = 0; i < arraySize; ++i) {
        if(a[i] == 0) continue;
        if(cnt == -1) {
            cnt = a[i];
            continue;
        }
        if(a[i] != cnt) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}