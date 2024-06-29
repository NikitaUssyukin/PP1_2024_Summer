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

    int target;
    cin >> target;

    cout << "s.count(target): " << s.count(target) << endl;
    if(s.find(target) != s.end()) {
        cout << "*(s.find(target)): " << *(s.find(target)) << endl;
    }
    

    return 0;
}