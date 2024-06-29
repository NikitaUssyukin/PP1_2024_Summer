#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x);
    }

    int sum = 0;

    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); ++it) {
        sum += *it;
    }

    cout << sum << endl;

    return 0;
}