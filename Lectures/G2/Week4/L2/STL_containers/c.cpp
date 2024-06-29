#include <iostream>
#include <vector>

using namespace std;

int main() {
    pair<int, int> p1;

    int a, b;
    cin >> a >> b;

    p1 = make_pair(a, b);

    pair<string, double> p2;
    p2.first = "Pi";
    p2.second = 3.14;

    pair<string, int> p3;
    cin >> p3.first >> p3.second;

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first << " " << p3.second << endl;

    return 0;
}