#include <iostream>

using namespace std;

// conditional statements
int main() {
    
    int a, b;
    cin >> a >> b;

    /*
    conditional statement must always start with if()
    in case you need additional conditions, add else if() blocks below
    and if you need to do something 
    in case all the previos conditions are false - use else block

    else if and else are optional - you do not have to use them

    however, keep in mind - each conditional block starts from if
    or in other words - each if starts a new, separate conditional block
    */

    if(a >= b) {
        cout << a << " is more than " << b << "!\n";
    }
    else if(a <= b) {
        cout << a << " is less than " << b << "!\n";
    }
    else {
        cout << a << " is equal to " << b << "!\n";
    }
    

    return 0;
}

