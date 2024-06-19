#include <iostream>

using namespace std;

void input_1d_array(int n, int a[]) {
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}

void output_1d_array(int n, int a[]) {
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    int a[n];

    input_1d_array(n, a);

    output_1d_array(n, a);

    return 0;
}