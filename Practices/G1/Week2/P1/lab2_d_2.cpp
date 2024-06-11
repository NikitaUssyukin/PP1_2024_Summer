#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    if(n <= k) {
        cout << 2 << endl;
    }
    else {
        double sides = n * 2;

        cout << round(sides / k) << endl;
    }

    return 0;
}

/*
n = 13, k = 7

sides = 26

sides / k = 26 / 7
sides / k = 3

sides % k = 26 % 7
sides % k = 5

k / 2 = 7 / 2
k / 2 = 3

(sides % k) / (k / 2) = 5 / 3
(sides % k) / (k / 2) = 1
------------
n = 11, k = 7

sides = 22

sides / k = 22 / 7
sides / k = 3

sides % k = 22 % 7
sides % k = 1

k / 2 = 7 / 2
k / 2 = 3

(sides % k) / (k / 2) = 1 / 3
(sides % k) / (k / 2) = 0

*/