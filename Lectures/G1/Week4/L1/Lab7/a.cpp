#include <iostream>

using namespace std;

long long degree(int n) {
    if(n == 1) return 2;
    if(n == 0) return 1;
    return 2 * degree(n - 1); 
}

int main() {
    int n;
    cin >> n;

    cout << degree(n) << endl;

    return 0;
}