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

    int i;

    for(i = a; i <= b; ++i) {
        cout << i << " ";
    }
    cout << i << endl;

    return 0;
}