#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n]; 

    for(int i = 0; i < n; ++i) { 
        cin >> a[i];
    }

    cout << a << endl;  // gives us the address of the first element of the array
    cout << *a << endl; // gives us the value stored at this address

    return 0;
}

/*
0x6ffdc0 in hex = 7339456 in decimal
*/