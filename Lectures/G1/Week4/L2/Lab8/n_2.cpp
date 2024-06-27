#include <iostream>
#include <set>

using namespace std;

// command to compile:
// g++ -std=c++11 .\n.cpp

int main() {
    int n;
    cin >> n;

    set<int> s;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x);
    }

    set<int>::iterator it;
    for(it = s.begin(); it != s.end();) {
        if(*it % 2 == 0) {
            it = s.erase(it);
        }
        else {
            ++it;
        }
    }
    cout << endl;

    for(it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}