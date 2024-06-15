#include <iostream>

using namespace std;

int main() {
    // another demonstration of undefined values
    int arraySize = 100;

    int a[arraySize];

    for(int i = 0; i < arraySize; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}