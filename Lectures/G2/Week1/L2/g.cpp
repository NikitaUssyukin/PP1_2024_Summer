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

    for(int i = a + a % 2; i <= b; i += 2) {
        cout << i << endl;
    }
    cout << endl;

    return 0;
}