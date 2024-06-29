#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    cout << "v.size(): " << v.size() << endl;
    cout << "v.empty(): " << v.empty() << endl;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
        cout << "v.size(): " << v.size() << endl;
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}