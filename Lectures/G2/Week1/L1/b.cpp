#include <iostream>

/*
the program is executed line by line
1st line is executed, then the 2nd line, so on
*/

using namespace std;

int main() {

    int a, b;

    a = 5;

    b = 2;

    cout << a << endl;

    a = b;

    cout << a << endl;

    return 0;
}