#include <iostream>
#include <map>

using namespace std;

int main() {
    // freopen("output.txt", "w", stdout);

    map<string, string> mp;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string assistant;
        int k;
        cin >> assistant >> k;
        for(int j = 0; j < k; ++j) {
            string student;
            cin >> student;

            mp[student] = assistant;
        }
    }

    int m;
    cin >> m;

    for(int i = 0; i < m; ++i) {
        string request;
        cin >> request;

        if(mp[request] == "") cout << "F\n";
        else cout << mp[request] << endl;
    }

    return 0;
}