#include <iostream>

using namespace std;

int main() {
    int n, m, b;

    cin >> n >> m >> b;

    double total = n + m;

    // cout << "total / 10: " << total / 10 << endl;
    // cout << "(n + m) / 10: " << (n + m) / 10 << endl;

    if(b > total / 10) {
        cout << "Boris, you are punished!\n";
    }
    else {
        cout << "You are my sweet baby\n";
    }

    return 0;
}