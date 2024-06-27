#include <iostream>
#include <array>

using namespace std;

int main() {
    // const int n = 5;

    array<int, 5> a;

    for(int i = 0; i < a.size(); ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}