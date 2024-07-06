#include <iostream>
#include <sstream> // header for stringstream
#include <set>

using namespace std;

/*
Take one line of integer numbers as an input
And then take the number that you want to find (target)
In the end we output whether the target was found
*/

int main() {
    string input_str;
    getline(cin, input_str);

    istringstream iss;

    iss.str(input_str);

    set<int> s;

    int temp;
    while(iss >> temp) {
        s.insert(temp);
    }

    int target;
    cin >> target;

    if(s.count(target)) cout << "Target found!\n";
    else cout << "Target not found!\n";

    return 0;
}