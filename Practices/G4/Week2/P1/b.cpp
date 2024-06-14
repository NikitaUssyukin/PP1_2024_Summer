#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int product = 1;

    while(n > 0) {
        int digit = n % 10;
        n /= 10; // n = n / 10

        sum += digit;
        product *= digit;
    }

    cout << sum + product << endl;

    return 0;
}

/*
input
123

output 
12

123 % 10 = 3
123 / 10 = 12

12 % 10 = 2
12 / 10 = 1

1 % 10 = 1
1 / 10 = 0

1 + 2 + 3 = 6
1 * 2 * 3 = 6

6 + 6 = 12
*/