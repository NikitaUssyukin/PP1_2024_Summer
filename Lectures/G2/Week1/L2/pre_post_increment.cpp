#include <iostream>

using namespace std;

/*
loops
while
for
do while 
*/

int main() {

    int a = 2; 
    int b = 3;

    cout << "++a: " << ++a << endl;
    cout << "a: " << a << endl;
    cout << "b++: " << b++ << endl;
    cout << "b: " << b << endl;

    cout << "a--: " << a-- << endl;
    cout << "a: " << a << endl;
    cout << "--b: " << --b << endl;
    cout << "b: " << b << endl;

    // cout << "a++ + ++b: " << a++ + ++b << endl;
    a--;
    b++;
    cout << "--a + b--: " << --a + b-- << endl;
    cout << "b: " << b << endl;

    return 0;
}