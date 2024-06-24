#include <iostream>
#include <algorithm>

using namespace std;

/*
comparator that assumes all even numbers
to be smaller than all odd numbers

i.e. any even number is smaller than any odd number

1000 is less than 1
8 is less than 5
22 is less than -11
etc

odd and odd
or 
even and even
are compared as usual
*/

bool comparator(int a, int b) {
    if(a % 2 == b % 2) { // check if both a and b are odd or even
        return a < b;
    } 
    else {
        if(a % 2 == 0) {
            return true;
        }
        else {
            return false;
        }
    }              
}

int main() {
    int n;
    cin >> n;

    int a[n];
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << "Before\n";
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    sort(a, a + n, comparator);

    cout << "After\n";
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}