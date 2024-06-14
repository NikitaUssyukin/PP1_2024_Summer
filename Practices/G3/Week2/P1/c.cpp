#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i = i + 1) {
        cin >> a[i];
    }

    int z;
    cin >> z;

    if(z >= 0) {
        for(int i = n - z; i < n; i = i + 1) {
            cout << a[i] << " ";
        }

        for(int i = 0; i < n - z; i = i + 1) {
            cout << a[i] << " ";
        }
    }
    else {
        z = -z; // z = abs(z)
        for(int i = z; i < n; i = i + 1) {
            cout << a[i] << " ";
        }

        for(int i = 0; i < z; i = i + 1) {
            cout << a[i] << " ";
        }
    }
    cout << endl;


    return 0;
}

/*
input
5
1 2 3 4 5
2

output
4 5 1 2 3 

a[5] = 1 2 3 4 5
  i  = 0 1 2 3 4

       4 5 1 2 3
  i  = 3 4 0 1 2


input
6
1 2 3 4 5 6
-2

output
3 4 5 6 1 2 

a[6] = 1 2 3 4 5 6
  i  = 0 1 2 3 4 5

       3 4 5 6 1 2
  i  = 2 3 4 5 0 1
*/