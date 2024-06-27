// INCOMPLETE SOLUTION, EXAMPLE OF INPUT

#include <iostream>
#include <sstream>
#include <set>

using namespace std;

int main() {
    const int arraySize = 2;
    set<int> s[arraySize];

    string inputData;
    istringstream iss;

    for(int i = 0; i < arraySize; ++i) {
        inputData.clear();
        iss.clear();

        getline(cin, inputData);
        iss.str(inputData);

        int x;
        while(iss >> x) s[i].insert(x);
    }

    for(int i = 0; i < arraySize; ++i) {
        set<int>::iterator it;
        for(it = s[i].begin(); it != s[i].end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}