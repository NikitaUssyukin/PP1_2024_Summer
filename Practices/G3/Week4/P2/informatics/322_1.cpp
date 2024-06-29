#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(vector<int> a, vector<int> b) {
    double dist1, dist2;
    dist1 = sqrt(a[0] * a[0] + a[1] * a[1]);
    dist2 = sqrt(b[0] * b[0] + b[1] * b[1]);

    return dist1 < dist2;
}


int main() {
    int n;
    cin >> n;
    vector<vector<int> > a(n, vector<int> (2));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }
    
    sort(a.begin(), a.end(), cmp);

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < 2; j++){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << a.back()[0] << " " << a.back()[1] << endl;
   
    return 0;
}