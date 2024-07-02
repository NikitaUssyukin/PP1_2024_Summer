#include <iostream>
#include <vector>

using namespace std;

int main() {
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> trees(n);

    for(int i = 0; i < n; ++i) {
        cin >> trees[i];
    }

    int q;
    cin >> q;    

    while(q > 0) {
        int l, r;
        cin >> l >> r;

        int maxHeight = 0;
        int cnt = 0;
        for(int j = l; j <= r; ++j) {
            if(trees[j] > maxHeight) {
                ++cnt;
                maxHeight = trees[j];
            }
        }
        cout << cnt << endl;

        --q;
    }

    return 0;
}