#include <iostream>

using namespace std;

int main() {
    int n, m, b;

    cin >> n >> m >> b;

    int total = n + m;

    if((total / 10) < b) {
        cout << "Boris, you are punished!\n";
    }
    else {
        cout << "You are my sweet baby\n";
    }

    return 0;
}