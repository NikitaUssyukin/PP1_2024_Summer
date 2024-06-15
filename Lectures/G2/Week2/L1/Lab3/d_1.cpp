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
    int maximum = a[maximum_i];
    
    for(int i = 0; i < n; i = i + 1) {
        if(a[i] > maximum) {
            maximum = a[i];
            maximum_i = i;
        }
    }
    cout << maximum_i + 1 << endl;

    return 0;
}