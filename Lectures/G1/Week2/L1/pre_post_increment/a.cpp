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

    cout << "a++: " << a++ << endl;

    cout << "a: " << a << endl;

    return 0;
}