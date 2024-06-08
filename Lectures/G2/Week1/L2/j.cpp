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

    for(int i = a; i <= b; ++i) {
        if(i % 2 != 0) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;

    return 0;
}