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
        int j = i;
        if(j % 2 == 0) {
            while(j <= b) {
                cout << j++ << " ";
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}