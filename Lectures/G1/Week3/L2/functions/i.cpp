#include <iostream>

using namespace std;

void change_array(int n, int a[]) { // parameter passed by copy
    for(int i = 0; i < n; ++i) {
        a[i] += i;
    }
}

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << "before change_array(n, a) call:\n";

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    change_array(n, a);

    cout << "after change_array(n, a) call:\n";

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}