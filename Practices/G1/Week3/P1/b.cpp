#include <iostream>
#include <algorithm>

/*
You have an array of present employees' IDs as input
And then you have X - you need to find Xth missing ID

Company has IDs of employees in the range [1; 1000]
E.g. : 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, ... , 997, 998, 1000.

Example of input:
3 2 4 7 11
10

Where 3 2 4 7 11 - an array, IDs of present employees
10 - X, ordinal number of the missing employee's ID to find

Output will be:
15

which is the id of the Xth (10th) missing employee

Note:
[11, 2, 3, 4, 7] missing points -> [1, 5, 6, 8, 9, 10, 12, 13...1000]
*/

using namespace std;

int main() {
    int arraySize = 1000; // Maximum possible size of the array
                          // according to the problem statement
    int N = 0;            // N will be our "logical" or "virtual" size

    int a[arraySize] = {};

    int temp;
    int i = 0;
    while(cin >> temp) {
        a[i] = temp;
        i += 1;
        N += 1;
    }

    /*
    1)
    a[0] = temp
    i += 1 (i is now 1)
    N += 1 (N is now 1)

    2)
    a[1] = temp
    i += 1 (i is now 2)
    N += 1 (N is now 2)

    .
    .
    .

    6)
    a[5] = temp
    i += 1 (i is now 6)
    N += 1 (N is now 6)

    X = a[6 - 1] (last inputted element, i - 1)
    a[6 - 1] = 0
    N -= 1; (N is now 5)


    */

    int X = a[i - 1];
    a[i - 1] = 0;

    N -= 1;

    sort(a, a + N);

    int id = 1;

    i = 0;

    while(X != 1 || a[i] == id) {
        if(a[i] == id) {
            i += 1;
            id += 1;
        } else {
            id += 1;
            X -= 1;
        }
    }

    if(id > 1000) {
        cout << -1 << endl;
    }
    else {
        cout << id << endl;
    }

    return 0;

}