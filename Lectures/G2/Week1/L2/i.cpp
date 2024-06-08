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

    do {
        cout << a++ << endl;
    } while(a <= b);

    return 0;
}