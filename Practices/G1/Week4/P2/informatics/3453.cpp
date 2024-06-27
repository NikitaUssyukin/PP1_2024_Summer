#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;

    for(int i = 0; i < n; ++i) {
        string request;
        int x;

        cin >> request;

        if(request == "ADD") {
            cin >> x;
            s.insert(x);
        }
        else if(request == "PRESENT") {
            cin >> x;
            if(s.count(x)) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
        else if(request == "COUNT") {
            cout << s.size() << endl;
        }

    }

    return 0;
}