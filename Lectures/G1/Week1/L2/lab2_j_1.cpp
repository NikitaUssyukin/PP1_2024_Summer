#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;

    int zeroCount = 0;

    int a;
    
    for(int i = 0; i < n; ++i) {
        cin >> a;

        while(a != 0) {
            zeroCount += (a % 10 == 0);
            a /= 10;
        }
    }

    cout << zeroCount << endl;

    return 0;
}