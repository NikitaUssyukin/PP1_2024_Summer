#include <iostream>
#include <vector>

using namespace std;

vector<int> vectMultiplyAllElements(vector<int> v, int m) {
    for(int i = 0; i < v.size(); ++i) {
        v[i] *= m;
    }

    return v;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }

    int m;
    cin >> m;

    cout << "\n-----------------\n";
    cout << "Before function call:\n";

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    v = vectMultiplyAllElements(v, m);

    cout << "-----------------\n";
    cout << "After function call:\n";

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}