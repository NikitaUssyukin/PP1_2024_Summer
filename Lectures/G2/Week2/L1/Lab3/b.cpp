#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i = i + 1) {
        cin >> a[i];
    }

    int counter = 0;

    for(int i = 0; i < n; i = i + 1) {
        if(a[i] > 0) {
            counter++;
        }
    }
    cout << counter << endl;

    return 0;
}