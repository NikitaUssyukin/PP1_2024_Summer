#include <iostream>

using namespace std;

int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b;

    cin >> a >> b;

    int c = add(a, b);

    cout << c << endl;

    return 0;
}