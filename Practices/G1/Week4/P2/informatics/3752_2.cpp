#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;

    int temp;
    while(cin >> temp) {
        if(s.count(temp)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
        s.insert(temp);
    }

    return 0;
}