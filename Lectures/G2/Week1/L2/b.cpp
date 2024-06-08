#include <iostream>

using namespace std;

/*
conditional statements
if
else if
else 
*/

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    bool side1, side2, side3;

    side1 = (a + b > c);
    side2 = (a + c > b);
    side3 = (b + c > a);

    if (side1 && side2 && side3) {
        cout << "Triangle exists" << endl;
    } 
    else {
        cout << "Triangle does not exist" << endl;
    }
    

    return 0;
}