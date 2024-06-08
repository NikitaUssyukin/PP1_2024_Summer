/*
Ice cream portions - 3 and/or 5

Possible numbers from 0 to 9: 0 1 2 3 4 5 6 7 8 9
Suitable numbers: 3 5 6 8 9

10 = 5 * 2
11 = 6 + 5
12 = 3 * 4
13 = 5 * 2 + 3
14 = 9 + 5
15 = 5 * 3
16 = 6 + 5 * 2
17 = 3 * 4 + 5
18 = 3 * 6
19 = 5 * 2 + 9
20 = 5 * 4
21 = 3 * 7
22 = 3 * 4 + 5 * 2
*/

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    while(n > 0) {
        cout << n % 10 << endl;
        n /= 10;
        cout << n << endl;
    }

    return 0;
}