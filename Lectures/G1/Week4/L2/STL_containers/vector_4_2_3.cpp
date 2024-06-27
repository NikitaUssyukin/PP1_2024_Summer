#include <iostream>
#include <vector>

using namespace std;

vector<int> multiplyAllElements(vector<int> v, int multiplier) {
    for(int i = 0; i < v.size(); ++i) {
        v[i] *= multiplier;
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

    int multiplier;
    cin >> multiplier;

    v = multiplyAllElements(v, multiplier);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}