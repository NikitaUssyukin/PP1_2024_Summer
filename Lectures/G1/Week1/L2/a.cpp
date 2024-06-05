#include <iostream>

using namespace std;

// assignment operator
// demonstration that it works from rigth to left
int main() {
    int x, y, z;

    x = y = z = 5;

    cout << x << " " << y << " " << z << endl;

    return 0;
}