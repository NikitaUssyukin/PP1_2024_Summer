#include <iostream>

using namespace std;

int main() {
    int x;
    int sum = 0;

    while(cin >> x) {
        sum += x;
    }

    cout << sum << endl;

    return 0;
}