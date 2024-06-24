#include <iostream>
#include <cmath>

using namespace std;

long long dec_to_bin(int dec, int counter) {
    if(dec == 0) return dec;
    if(dec == 1) return 1 * pow(10, counter);
    return dec % 2 * pow(10, counter) + dec_to_bin(dec / 2, ++counter); 
}

int main() {
    int n;
    cin >> n;

    cout << dec_to_bin(n, 0) << endl;

    return 0;
}