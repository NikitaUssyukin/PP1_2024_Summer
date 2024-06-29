#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    cout << "v.size(): " << v.size() << endl;
    cout << "v.empty(): " << v.empty() << endl;

    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
        cout << "v.size(): " << v.size() << endl;
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}