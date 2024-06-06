#include <iostream>

using namespace std;

/*
char data type

hold single characters

characters are encoded as 8-bit numbers
encoded using ASCII code

visible characters are encoded using decimal numbers
in the range 32-126 (inclusive)
*/

int main() {
    char a;

    a = 'A';

    cout << a << endl;

    // explicit type casting, from char to int
    cout << int(a) << endl;
    cout << (int)a << endl; // same as above

    char b;

    b = 'B';

    // implicit type casting, from char to int
    int c = b;

    cout << c << endl;

    return 0;
}