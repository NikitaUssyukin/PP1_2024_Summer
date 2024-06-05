#include <iostream>

using namespace std;

/*
fundamental data types:
int - for integer (whole) numbers, e.g.: 0, 1, 2, -2, 174, etc
double - for decimal numbers, e.g.: 0.12, 1.23, 3.13, -9.74, etc
char - for symbols, e.g.: 'a', 'b', 'A', 'B', '0', '9', '!', '#', ' ', '.', etc
bool - for boolean values, i.e. true or false (0 or 1), e.g.: 0, 1, true, false, etc
*/

int main() {
    // char

    int a;
    char b;

    cin >> a;

    // implicit type casting
    b = a;

    cout << "a: " << a << endl;

    cout << "b: " << b << '\n';

    // explicit type casting
    cout << "char(a): " << char(a) << '\n';
    // or
    cout << "(char)a: " << (char)a << '\n';

    return 0;
}