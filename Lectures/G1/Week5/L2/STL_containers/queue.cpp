#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    cout << "------------\n";
    cout << "q.empty(): " << q.empty() << endl;
    cout << "q.size(): " << q.size() << endl;
    cout << "------------\n\n";

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        q.push(x);
    }

    cout << "\n------------\n";
    cout << "q.empty(): " << q.empty() << endl;
    cout << "q.size(): " << q.size() << endl;
    cout << "------------\n\n";

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    cout << "\n------------\n";
    cout << "q.empty(): " << q.empty() << endl;
    cout << "q.size(): " << q.size() << endl;
    cout << "------------\n\n";

    return 0;
}