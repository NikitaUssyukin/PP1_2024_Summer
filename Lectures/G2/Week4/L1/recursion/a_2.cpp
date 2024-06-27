#include <iostream>

using namespace std;

long long factorial(int n) { // maximum factorial that we can calculate here is 20
    if(n == 1 || n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;

    // factorial(0) = 1
    // factorial(1) = 1
    // factorial(2) = 2 * factorial(1)

    cout << factorial(n) << endl;

    return 0;
}