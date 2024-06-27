#include <iostream>

using namespace std;

int main() {
    pair<int, bool> p1 = make_pair(1, true);

    pair<string, double> p2;
    
    p2.first = "Pi";
    p2.second = 3.14;

    pair<string, int> p3;

    cin >> p3.first >> p3.second;

    cout << endl;

    cout << "p1:\n";
    cout << p1.first << " " << p1.second << endl;

    cout << "p2:\n";
    cout << p2.first << " " << p2.second << endl;

    cout << "p3:\n";
    cout << p3.first << " " << p3.second << endl;

    return 0;
}