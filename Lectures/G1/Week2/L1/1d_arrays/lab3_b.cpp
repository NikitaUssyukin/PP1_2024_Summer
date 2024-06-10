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

    int positiveCount = 0;

    // output elements from an array:
    for(int i = 0; i < n; ++i) {
        if(a[i] > 0) {
            positiveCount = positiveCount + 1;
        }
    }
    cout << positiveCount << endl;

    return 0;
}