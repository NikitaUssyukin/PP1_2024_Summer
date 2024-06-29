#include <iostream>

using namespace std;


int main() {
    int n, m;
    cin >> n >> m;

    int a1 = 0, a2 = 1;

    int result;

    if(m == 1 || m == 2) {
        cout << m - 1 << endl;
        return 0;
    }

    for(int i = 3; i <= m; ++i) {
        result = a2 + n * a1;
        a1 = a2;
        a2 = result;
    }

    cout << result << endl;

    return 0;
}