#include <iostream>

using namespace std;


// parameter passed by reference
void increment(int &a) { // increases the number by 1
    a += 1;
}

int main() {
    int a;
    cin >> a;

    cout << "Before: " << a << endl;
    increment(a);
    cout << "After: " << a << endl;

    return 0;
}