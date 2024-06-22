#include <iostream>

using namespace std;

int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b;

    cin >> a >> b;

    cout << add(a, b) << endl;

    return 0;
}