#include <iostream>
#include <sstream>
#include <set>

using namespace std;

int main() {
    set<int> s;

    string inputData;

    getline(cin, inputData);
    istringstream iss(inputData);

    int temp;
    while(iss >> temp) {
        if(s.count(temp)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
        s.insert(temp);
    }

    return 0;
}