#include <iostream>

using namespace std;

int ourMax(int a, int b) {
    if(a > b) return a;
    else return b;
}

int main() {
    int num1, num2;

    cin >> num1 >> num2;

    cout << ourMax(num1, num2) << endl;

    return 0;
}