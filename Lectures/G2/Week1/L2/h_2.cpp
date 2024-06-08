#include <iostream>
#include <cmath>

using namespace std;

/*
loops
while
for
do while 
*/

int main() {

    int a, b;

    cin >> a >> b;

    int exponent = 0;
    int power = pow(2, exponent++);
    while(a > power) {
        power = pow(2, exponent++);
    }

    a = power;

    for(int i = a; i <= b; i *= 2) {
        cout << i << endl;
    }
    cout << endl;

    return 0;
}