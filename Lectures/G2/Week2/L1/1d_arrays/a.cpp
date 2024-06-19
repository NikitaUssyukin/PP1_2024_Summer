/*
What is an array? 

An array is a data structure that holds a sequence of data
E.g. a sequence of integer numbers:
1 3 8 -2 0 99

An array can hold any data type: int, double, char, string, etc

One array can store only data of one type.
E.g., you cannot mix together integers and doubles in one array
It's either one or the other

To declare an array, we use the syntax:
data_type array_name[array_size]

To access individual elements of the array we use the following syntax:
array_name[index]

Where index is the number between 0 and the array_size - 1.
You can think of the array index as the amount of steps you need to take
from the start of the array to get to the desired element.
E.g., to access the first element, we need to take 0 steps from the start of the array
to access the second element, we need to take 1 step
etc

Arrays are static in size - their size cannot be changed once the array is declared
*/

#include <iostream>

using namespace std;

int main() {
    int n = 5;
    int a[n];
    /*
    indexes: 0 1 2 3 4
    0 - first element
    .
    .
    4 - last element (n - 1)
    */

    a[0] = 1;
    a[1] = 3;
    a[2] = 8;
    a[3] = -2;
    a[4] = 0;

    cout << a[0] << " ";
    cout << a[1] << " ";
    cout << a[2] << " ";
    cout << a[3] << " ";
    cout << a[4] << endl;

    return 0;
}