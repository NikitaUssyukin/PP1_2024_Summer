#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(j == n - 1 - i) {
                cout << i + 1;
            }
            else {
                cout << '.';
            }
        }
        cout << endl;
    }

    return 0;
}

/*
n = 4

...1 - row 0 (index i), number at index 3 (index j)
..2. - row 1, number at index 2
.3.. - row 2, number at index 1
4... - row 3, number at index 0

Condition for outputting a number:
j == n - 1 - i

*/