#include <iostream>

using namespace std;

/*
increment/decrement

++
--

increase by 1
or
decrease by 1

*/

int main() {
    int a;

    cin >> a;

    cout << ++a << endl; // same as a = a + 1
    // or a += 1

    cout << --a << endl; // same as a = a - 1
    // or a -= 1

    return 0;
}