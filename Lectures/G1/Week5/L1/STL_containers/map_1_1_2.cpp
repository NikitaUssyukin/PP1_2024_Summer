#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    m["Dog"] = 3;
    m["Cat"] = 5;
    m["Elephant"] = 1;

    cout << m["Dog"] << endl;
    cout << m["Cat"] << endl;
    cout << m["Elephant"] << endl;

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}