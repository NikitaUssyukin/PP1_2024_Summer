#include <iostream>

using namespace std;

int main() {
    int year;
    cin >> year;

    /*
    1) year % 4 == 0 and year % 100 != 0
    2) year % 400 == 0
    */
    
    if((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}