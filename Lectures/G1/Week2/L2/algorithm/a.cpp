#include <iostream>
#include <algorithm> // library for using 
// sort() and  reverse()

using namespace std;

/*
sort(first, last)

first - address (or iterator) of the first element
last - address (or iterator) of the last element (which is not included in the range)

[first, last) - including first element, but not including the last
*/

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // our sorting operation
    sort(a, a + n);
    
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}