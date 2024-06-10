#include <iostream>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    int a[n];

    // input elements into the array:
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // finding target (m);
    for(int i = 0; i < n; ++i) {
        if(m == a[i] || m < a[i]) {
            cout << i << endl;
            return 0; // if we find target (m)
            // or where it would be
            // we stop the program
            // "return 0" stops the whole program
        }
    }

    cout << n << endl;

    return 0;
}

/*

5 13
1 3 5 12 14

13 == 1 or 13 < 1
false or false => false

13 == 3 or 13 < 3
false or false => false

13 == 5 or 13 < 5
false or false => false

13 == 12 or 13 < 12
false or false => false

13 == 14 or 13 < 14
false or true => true
we output the current index (i) and stop the program
*/