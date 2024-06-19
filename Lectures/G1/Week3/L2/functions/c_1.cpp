#include <iostream>

using namespace std;

int sum_of_1d_array(int n) {
    int a[n];

    int sum = 0;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    cout << sum_of_1d_array(n) << endl;

    return 0;
}