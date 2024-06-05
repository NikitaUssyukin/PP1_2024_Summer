#include <iostream>

using namespace std;

// relational operators
int main() {
    
    int a, b, c;

    cin >> a >> b >> c;

    /*
    this will not work:
    a == b == c
    a < b < c
    a <= b <= c
    */

    // but instead, you can use this:

     // equal to - ==
    cout << "a == b && b == c: " << (a == b && b == c) << endl;

    // less than - <
    cout << "a < b && b < c: " << (a < b && b < c) << endl;


    // less than or equal to - <=
    cout << "a <= b && b <= c: " << (a <= b && b <= c) << endl;

    return 0;
}

