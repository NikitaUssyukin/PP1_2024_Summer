#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; 

    int a[n];

    for(int i = 0; i < n; i = i + 1) {
        cin >> a[i];
    }

    int maximum_i = 0;
    
    for(int i = 0; i < n; i = i + 1) {
        if(a[i] > a[maximum_i]) {
            maximum_i = i;
        }
    }
    cout << maximum_i + 1 << endl;

    return 0;
}