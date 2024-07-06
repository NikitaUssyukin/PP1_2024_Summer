#include <iostream>
#include <queue>

using namespace std;

int main() {
    // freopen("output.txt", "w", stdout);

    queue<string> q;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int action;
        string name;
        cin >> action;

        if(action == 1) {
            cin >> name;
            q.push(name);
            cout << q.front() << endl;
        }
        else if(action == 2) {
            if(!q.empty()) q.pop();
            if(q.empty()) cout << "queue is empty\n";
            else cout << q.front() << endl;
        }
    } 

    return 0;
}