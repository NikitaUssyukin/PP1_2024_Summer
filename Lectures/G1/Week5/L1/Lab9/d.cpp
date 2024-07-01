#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    map<int, int> m;

    for(int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;

        ++m[temp];
    }

    cout << m[k] << endl;

    return 0;
}