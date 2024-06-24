#include <iostream>

using namespace std;

int fact(int n) { // with int, maximum factorial we can calculate is 12
    if(n == 1 || n == 0) return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << fact(n) << endl;

    return 0;
}