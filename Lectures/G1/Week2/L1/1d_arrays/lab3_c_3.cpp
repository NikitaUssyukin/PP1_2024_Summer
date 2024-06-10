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

    maximum = a[0]; // assume the first element of the array
    // to be the maximum
    // after that, we compare it against all the other elements

    // finding maximum
    for(int i = 0; i < n; ++i) {
        if(a[i] > maximum) {
            maximum = a[i];
        }
    }
    
    cout << maximum << endl;

    return 0;
}