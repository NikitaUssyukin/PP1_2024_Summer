#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        dq.push_back(temp);
    }

    for(int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << " ";
    }
    cout << endl;

    return 0;
}