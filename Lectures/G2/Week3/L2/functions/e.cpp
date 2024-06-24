#include <iostream>

using namespace std;

int sumOfTheArray(int n, int a[]) {
    int sum = 0;

    for(int i = 0; i < n; ++i) {
        sum += a[i];
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << sumOfTheArray(n, a) << endl;

    return 0;
}