#include <iostream>

using namespace std;

long long fact(int n) { // with long long, maximum factorial we can calculate is 20
    if(n == 1 || n == 0) return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << fact(n) << endl;

    return 0;
}