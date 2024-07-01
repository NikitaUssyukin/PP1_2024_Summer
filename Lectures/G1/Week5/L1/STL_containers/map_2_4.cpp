#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    int n;
    cin >> n;

    cout << "m.empty(): " << m.empty() << endl;
    cout << "m.size(): " << m.size() << endl;

    for(int i = 0; i < n; ++i) {
        string s;

        cin >> s;

        ++m[s];

        // output code, no actual program logic here
        cout << "\n----------\n"; // visual separator
        cout << "m.empty(): " << m.empty() << endl; // checks if map is empty
        cout << "m.size(): " << m.size() << endl; // checks size of the map (amount of elements)
        cout << "All elements in our map:\n";
        map<string, int>::iterator it;
        for(it = m.begin(); it != m.end(); ++it) {
            cout << it->first << " " << it->second << endl;
        }
        cout << "----------\n"; // visual separator
        // end of output code
    }

    

    return 0;
}