#include <iostream>

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

    while(a <= b) {
        cout << a << " ";
        ++a;
    }
    cout << endl;

    return 0;
}