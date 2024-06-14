#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int counter = 1;

    for(int i = 0; i < n - 1; ++i) {
        if(a[i] != a[i + 1]) counter++;
    }

    cout << counter << endl;

    return 0;
}

/*
1 2 2 3 5

1 != 2 - true
counter++

2 != 2 - false

2 != 3 - true
counter++

3 != 5 - true
counter++



*/