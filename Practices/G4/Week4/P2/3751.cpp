// INCOMPLETE SOLUTION, EXAMPLE OF INPUT

#include <iostream>
#include <sstream>
#include <set>

using namespace std;

int main() {
    set<int> s1;
    set<int> s2;

    string inputData;

    getline(cin, inputData);
    istringstream iss;

    iss.str(inputData);
    // cout << iss.str() << endl;

    int x;
    while(iss >> x) s1.insert(x);

    inputData.clear();
    iss.clear();

    getline(cin, inputData);
    iss.str(inputData);
    // cout << iss.str() << endl;

    while(iss >> x) s2.insert(x);

    set<int>::iterator it1, it2;
    for(it1 = s1.begin(), it2 = s2.begin(); it1 != s1.end() && it2 != s2.end();) {
        if(*it1 < *it2) {
            ++it1;
        }
        else if(*it1 > *it2) {
            ++it2;
        }
        else {
            cout << *it1 << " ";
            ++it1;
            ++it2;
        }
    }
    cout << endl;

    return 0;
}