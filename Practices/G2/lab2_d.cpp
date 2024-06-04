#include <iostream>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    int sides = n * 2;

    if(n <= k) {
        cout << 2 << endl;
    }
    else {
        cout << (sides / k) + (sides % k) / (k / 2) << endl;
    }

    return 0;
}

/*
A B C - steaks

A1, A2   B1, B2   C1, C2 - sides of each steak

1st minute: A1 B1
2nd minute: A2 C1
3rd minute: B2 C2


n = 13
k = 7
sides = 26

sides / k = 3
sides % k = 5
*/