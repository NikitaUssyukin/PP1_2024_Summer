// example of a solution without using arrays

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int positiveCount = 0;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if(x > 0) {
            positiveCount = positiveCount + 1;
        }

    }

    cout << i << endl

    cout << positiveCount << endl;

    return 0;
}