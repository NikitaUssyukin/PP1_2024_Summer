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

    if(s.find(target) != s.end()) {
        s.erase(s.find(target));
    }

    set<int>::iterator it;
    
    for(it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    

    return 0;
}