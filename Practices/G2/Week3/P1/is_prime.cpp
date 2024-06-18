// The simplest way to determine if a number is prime
// Not the most optimal solution, but it is still viable

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 2; i < n; ++i) {
        if(n % i == 0) {
            cout << "Number " << n << " is not prime.\n";
            return 0;
        }
    }

    cout << "Number " << n << " is prime.\n";

    return 0;
}
