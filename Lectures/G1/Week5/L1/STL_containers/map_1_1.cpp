#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    m["Cat"] = 3;
    m["Dog"] = 5;
    m["Elephant"] = 1;

    cout << m["Cat"] << endl;
    cout << m["Dog"] << endl;
    cout << m["Elephant"] << endl;

    return 0;
}