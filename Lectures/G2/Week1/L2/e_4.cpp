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

    // infinite loop
    for(;;) {
        cout << (a += b) << endl;
    }
    // Ctrl + C to stop

    return 0;
}