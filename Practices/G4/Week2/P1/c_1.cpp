// partial solution, 98/100

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0;

    for(int i = 0; i < n; i = i + 1) {
        double x;
        cin >> x;

        sum += x; // same as sum = sum + x
    } 

    cout << sum / n << endl;

    return 0;
}