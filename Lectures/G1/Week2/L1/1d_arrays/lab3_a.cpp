#include <iostream>

using namespace std;

int main() {
    int n;

    // usually you will get n (size of the array) from the terminal
    cin >> n;

    int a[n]; // size of the 1d array is usually denoted by n


    // input elements into an array:
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // output elements from an array:
    for(int i = 0; i < n; ++i) {
        if(a[i] % 2 != 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    return 0;
}