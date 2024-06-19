#include <iostream>

using namespace std;

void change_num(int a) { // parameter passed by copy
    a += 5;
}

int main() {
    int a;
    cin >> a;

    cout << a << endl;

    change_num(a);

    cout << a << endl;

    return 0;
}