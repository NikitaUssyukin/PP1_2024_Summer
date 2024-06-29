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

    set<int>::iterator it;
    
    for(it = --s.end(); it != --s.begin(); --it) {
        cout << *it << " ";
    }
    cout << endl;

    //       1 2 3 4 5
    //     ^ 
    // --s.begin()

    return 0;
}