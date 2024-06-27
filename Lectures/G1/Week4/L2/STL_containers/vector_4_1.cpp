#include <iostream>
#include <vector>

using namespace std;

int vectorSum(vector<int> v) {
    int sum = 0;

    for(int i = 0; i < v.size(); ++i) {
        sum += v[i];
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }

    cout << vectorSum(v) << endl;

    return 0;
}