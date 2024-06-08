#include <iostream>

using namespace std;

int main() {
    
    int N;
    cin >> N;

    int k = 0;

    int res = 1; // 2 to the power of k
    // initially k is 0, so 2^k = 2^0 = 1

    while(res < N) {
        res *= 2; // same as pow_of_2 = pow_of_2 * 2
        ++k;
    }

    cout << res << endl;

    return 0;
}