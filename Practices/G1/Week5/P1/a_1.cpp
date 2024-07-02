#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> trees(n);

    for(int i = 0; i < n; ++i) {
        cin >> trees[i];
    }

    int q;
    cin >> q;

    vector<pair<int, int> > queries(q);

    for(int i = 0; i < q; ++i) {
        cin >> queries[i].first >> queries[i].second;
    }

    for(int i = 0; i < queries.size(); ++i) {
        int l = queries[i].first;
        int r = queries[i].second;

        int maxHeight = 0;
        int cnt = 0;
        for(int j = l; j <= r; ++j) {
            if(trees[j] > maxHeight) {
                ++cnt;
                maxHeight = trees[j];
            }
        }
        cout << cnt << endl;
    }

    return 0;
}