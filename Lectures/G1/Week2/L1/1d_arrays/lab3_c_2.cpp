#include <iostream>
#include <climits> // library for INT_MIN
// and other constants containing limits of variable types
// e.g. INT_MAX, INT_MIN, LLONG_MAX, etc

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

    maximum = INT_MIN; // the smallest possible number
    // that an int can hold

    // finding maximum
    for(int i = 0; i < n; ++i) {
        if(a[i] > maximum) {
            maximum = a[i];
        }
    }
    
    cout << maximum << endl;

    return 0;
}