#include <iostream>

using namespace std;

int main() {
    int n, k; 

    cin >> n >> k;
    // 723 - how to get 7?
    int firstDigit = k / 100;
    // cout << "k / 100: " << firstDigit << endl;

    // 723 - how to get 3?
    int lastDigit = k % 10;
    // cout << "k % 10: " << lastDigit << endl;

    cout << n + firstDigit + lastDigit;

    return 0;
}