#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;

    while(n > 0) {
        int remainder = n % 16;
        if(remainder > 9) {
            s += 'A' + remainder - 10;
        }
        else {
            s += remainder + '0';
        }
        n /= 16;
    }

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}

/*
1457

1457 % 10 = 7
1457 /= 10
(145)

145 % 10 = 5
145 /= 10
(14)

14 % 10 = 4
14 /= 10 
(1)

1 % 10 = 1
1 /= 10
(0)

7541

9F1 (hex)

9 * 16^2 + F (15) * 16^1 + 1 * 16^0
9 * 256 + 15 * 16 + 1 * 1
2304 + 240 + 1 
2545
*/