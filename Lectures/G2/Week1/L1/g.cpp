#include <iostream>

using namespace std;

/*
compound assignment operators

+=
-=
*=
/=
%=

*/

int main() {
    double a, b;
    
    cin >> a >> b;

    a += b;

    cout << a << endl;

    cin >> a >> b;

    a *= b;

    cout << a << endl;

    return 0;
}