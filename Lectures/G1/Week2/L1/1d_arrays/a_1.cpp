/*
arrays

arrays allow us to store multiple pieces of data
using only one identifier (variable name)


*/

#include <iostream>

using namespace std;

int main() {
    int n = 5;
    int a[n]; // size of the 1d array is usually denoted by n

    // arrays are static in size
    // once the array is created, its size cannot be changed
    // even if you change n, array size stays the same

    // indexes in the array go from 0 to n - 1 (4 in our case)
    // a |_|_|_|_|_|
    // i  0 1 2 3 4


    // input elements into an array:
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    /*
    input using for, same as:
    cin >> a[0];
    cin >> a[1];
    .
    .
    .
    cin >> a[n - 1];
    */

    // output elements from an array:
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    /*
    output using for, same as:
    cout << a[0] << " ";
    cout << a[1] << " ";
    .
    .
    .
    cout << a[n - 1] << " ";
    */


    return 0;
}