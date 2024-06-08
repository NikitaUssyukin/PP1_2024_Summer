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

    for(int i = a, j = b; i <= j && j <= 100; ++i, j *= 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}