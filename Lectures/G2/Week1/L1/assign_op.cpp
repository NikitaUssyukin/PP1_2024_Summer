#include <iostream>

using namespace std;

/*
assignment operator

=

*/

int main() {
    int a, b, c;

    a = 5;

    b = 4;

    c = 3;

    cout << a << " " << b << " " << c << endl; 

    a = b = c;

    cout << a << " " << b << " " << c << endl;

    return 0;
}