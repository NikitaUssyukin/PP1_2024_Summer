/*
the number must be divisible by 2, 3 and/or 5

it can be divisible by 2 and 5
or 3 and 2
or by any of these numbers individually
but NOT by any other prime

E.g.

21 = 7 * 3  ->  No
7 and 3 are prime factors of 21

15 = 5 * 3  ->  Yes
5 and 3 are prime factors of 15

30 = 2 * 3 * 5  ->  Yes

2, 3 and 5 are prime factors of 30

Take into account only prime factors, i.e.:
2, 3, 5, 7, 11, 13, 17, 19, etc

*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n % 2 == 0) {
        n /= 2;
    }

    while(n % 3 == 0) {
        n /= 3;
    }

    while(n % 5 == 0) {
        n /= 5;
    }

    if(n == 1) {
        cout << "Yes\n";
    }
    else {
        // cout << n << endl;
        cout << "No\n";
    }

    return 0;
}

/*
21 % 2 == 0   -   false

21 % 3 == 0   -   true
21 /= 3
21 => 7

7 % 3 == 0    -   false

7 % 5 == 0    -   false



*/