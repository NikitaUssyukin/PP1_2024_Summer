// Using array elements as counters

#include <iostream>

using namespace std;

int main() {

    // assume we can get digits between 0 and 9 as an input
    int arraySize = 10;
    int a[arraySize] = {}; // "= {}" means fill the array with zeroes; it only works when you know the size of the array before compilation
    // if the array has the size 10, then it has
    // indexes in the range [0; 9]

    int n; // in this case, n means the amount of digits we will get
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ++a[x];
    }

    // counter array contents
    // for(int i = 0; i < arraySize; ++i) {
    //     cout << "i: " << i << ", count: " << a[i] << endl;
    // }

    int uniqueCount = 0;

    for(int i = 0; i < arraySize; ++i) {
        if(a[i] != 0) ++uniqueCount;
    }

    cout << uniqueCount << endl;

    return 0;
}