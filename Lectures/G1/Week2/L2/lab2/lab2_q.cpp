#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int width = 2 * n - 1;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < width; ++j) {
            if((j < width / 2 - i) || (j >= width / 2 + i + 1)) {
                cout << '.';
            }
            else {
                cout << '*';
            }
        }
        cout << endl;
    }

    return 0;
}

/*
n = 6

.....*..... - indexes: [0; 5) - dots, [5; 6) - star, [6; 11) - dots
....***.... - indexes: [0; 4) - dots, [4; 7) - star, [7; 11) - dots
...*****...
..*******..
.*********.
***********

height = n (6 in this case)
width - 2 * n - 1 (11 in this case)

line indexes, using i:
indexes: [0; width / 2 - i) - dots, [width / 2 - i; width / 2 + i + 1) - star, [width / 2 + i + 1; width) - dots
*/