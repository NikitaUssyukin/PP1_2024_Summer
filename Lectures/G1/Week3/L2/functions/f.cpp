#include <iostream>
#include "array_1d_io.h" // header file containing our functions

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    input_1d_array(n, a);

    output_1d_array(n, a);

    return 0;
}