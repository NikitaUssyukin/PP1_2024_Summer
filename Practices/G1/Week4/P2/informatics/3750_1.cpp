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
    istringstream iss1(inputData);

    int x;
    while(iss1 >> x) s1.insert(x);

    inputData.clear();
    getline(cin, inputData);
    istringstream iss2(inputData);

    while(iss2 >> x) s2.insert(x);

    set<int>::iterator it;
    for(it = s1.begin(); it != s1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    for(it = s2.begin(); it != s2.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}