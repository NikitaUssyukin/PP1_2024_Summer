#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << a[n - 1] << " "; // n - 1 is the last index in the array
    // by writing a[n - 1], we get the last element of the array
    // n - 1 in the brackets will be evaluated and we will get the 
    // result of this expression as a number

    for(int i = 0; i < n - 1; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}

/*
6
4 5 3 4 2 3

3 4 5 3 4 2

a[6] = 4 5 3 4 2 3
  i  = 0 1 2 3 4 5

       3 4 5 3 4 2
  i  = 5 0 1 2 3 4

*/