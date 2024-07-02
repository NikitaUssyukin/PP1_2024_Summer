#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> bugs;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string bug_name, weakness;
        cin >> bug_name >> weakness;
        bugs[weakness] += 1; 
    }

    int m;
    cin >> m;

    for(int i = 0; i < m; ++i) {
        string hunter_name, ability;
        int number_of_bugs;
        cin >> hunter_name >> ability >> number_of_bugs;
        if(bugs[ability] - number_of_bugs >= 0) bugs[ability] -= number_of_bugs;
        else bugs[ability] = 0;
    }

    int bugs_cnt = 0;

    map<string, int>::iterator it;
    for(it = bugs.begin(); it != bugs.end(); ++it) {
        bugs_cnt += it->second;
    }

    cout << "Bugs left: " << bugs_cnt << endl;

    return 0;
}