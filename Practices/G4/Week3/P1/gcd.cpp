#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int divider = min(a, b);

    int gcd = 1;

    while(divider > 1) {
        if(a % divider == 0 && b % divider == 0) {
            gcd = divider;
            break;
        }
        --divider;
    }

    cout << gcd << endl;

    return 0;
}