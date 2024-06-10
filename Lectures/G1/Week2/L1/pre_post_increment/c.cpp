/*
increment (++) - increase by 1

decrement (--) - decrease by 1

both have post- and pre- versions
(e.g. a++ - postincrement, --a - predecrement)
*/

#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int b = 2;

    cout << "++a + b--: " << ++a + b-- << endl;

    cout << "a, b: " << a << ", " << b << endl;

    ++a;
    b++;

    cout << "a++ + ++b: " << a++ + ++b << endl;

    cout << "a, b: " << a << ", " << b << endl;

    return 0;
}