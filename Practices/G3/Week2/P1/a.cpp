#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int maximum = 0;
    int sum = 0;

    for(int i = 0; i < n; i = i + 1) {
        int x;
        cin >> x;

        if(x > maximum) maximum = x;

        sum += x;
    }

    cout << sum << " " << maximum << endl;

    return 0;
}