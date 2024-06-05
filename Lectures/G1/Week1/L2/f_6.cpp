#include <iostream>

using namespace std;

// conditional statements
int main() {
    
    int a, b, c;
    cin >> a >> b >> c;

    /*
    checking if the triangle with sides a, b and c can exist
    */

    if(a + b > c && a + c > b && b + c > a) {
        cout << "Triangle can exist!\n";
    } else {
        cout << "Triangle does not exist!\n";
    }
    

    return 0;
}

