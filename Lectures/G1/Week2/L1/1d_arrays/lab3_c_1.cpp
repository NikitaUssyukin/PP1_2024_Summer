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

    int maximum; // better not to name the variable "max"
    // because it will collide with the function named "max()"
    // same goes with "min", collides with "min()" function

    maximum = -1000000000; // problem states that the minimum
    // possible element we might get is -10^9

    // finding maximum
    for(int i = 0; i < n; ++i) {
        if(a[i] > maximum) {
            maximum = a[i];
        }
    }
    
    cout << maximum << endl;

    return 0;
}