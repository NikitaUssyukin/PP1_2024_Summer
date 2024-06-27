#include <iostream>

using namespace std;

long long fibonacci(int n) {
    if(n == 1 || n == 0) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i <= n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    
    return 0;
}