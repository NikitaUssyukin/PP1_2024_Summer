/*
Ice Cream:

3 or 5

0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

Possible options: 3 5 6 8 9 10 11 12 13 14 15 16 17 18 19 20
*/

#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;

    if(k < 3 || k == 4) {
        cout << "NO\n";
    } 
    else if(k % 3 == 0 || k % 5 == 0 || k % 3 == 2 || k % 5 == 1 || k % 5 == 3 || k % 5 == 4) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}