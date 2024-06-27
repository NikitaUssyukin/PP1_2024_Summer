#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, string> > students;

    for(int i = 0; i < n; ++i) {
        pair<string, string> p;
        cin >> p.first >> p.second;

        int a, b, c;
        cin >> a >> b >> c;

        if(a <= 3 || b <= 3 || c <= 3) {
            continue;
        }
        else {
            students.push_back(p);
        }
    }

    for(int i = 0; i < students.size(); ++i) {
        cout << students[i].first << " " << students[i].second << endl;
    }

    return 0;
}