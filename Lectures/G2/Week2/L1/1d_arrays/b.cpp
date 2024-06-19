#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n]; // declaring an array with name "a" and n elements

    for(int i = 0; i < n; ++i) { // taking n elements as an input
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) { // output n individual elements
        cout << a[i] << " ";
    }

    return 0;
}