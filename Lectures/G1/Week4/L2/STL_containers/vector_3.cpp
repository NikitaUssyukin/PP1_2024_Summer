#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }

    // different ways to access the first element of the vector
    cout << v[0] << " " << v[v.size() - 1] << endl;
    cout << v.at(0) << " " << v.at(v.size() - 1) << endl;
    cout << v.front() << " " << v.back() << endl;
    cout << *(v.begin()) << " " << *(v.end() - 1) << endl;

    return 0;
}