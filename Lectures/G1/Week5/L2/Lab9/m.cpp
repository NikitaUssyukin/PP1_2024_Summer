#include <iostream>
#include <queue>

using namespace std;

int main() {
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    queue<string> q;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        if(x == 1) {
            string name;
            cin >> name;
            q.push(name);
            cout << q.front() << endl;
        }

        if(x == 2) {
            if(!q.empty()) q.pop();
            if(!q.empty()) {
                cout << q.front() << endl;
            }
            else {
                cout << "queue is empty" << endl;
            }
        }
    }

    return 0;
}