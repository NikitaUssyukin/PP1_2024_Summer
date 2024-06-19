#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n]; 

    for(int i = 0; i < n; ++i) { 
        cin >> a[i];
    }
    /* 
    sort(first, last)
    first - the first element in the range, including
    last - the last element in the range, not including
    [first, last)
    */

    reverse(a, a + n);

    for(int i = 0; i < n; ++i) { // addresses of all elements in an array
        cout << a[i] << " ";
        // *(a + i) is the same as a[i]
    }
    cout << endl;

    return 0;
}

/*
0x6ffdc0 in hex = 7339456 in decimal
*/