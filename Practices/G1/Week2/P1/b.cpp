#include <iostream>

using namespace std;

int main() {
    int N;

    cin >> N;

    if(N == 1) {
        cout << 0 << endl;
    }
    else if(N % 2 == 0) {
        cout << N / 2 << endl;
    }
    else {
        cout << N << endl;
    }

    return 0;
}