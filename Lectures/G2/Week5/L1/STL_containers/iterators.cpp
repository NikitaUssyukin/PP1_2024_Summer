#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    m["Cat"] = 5;
    m["Dog"] = 3;
    m["Monkey"] = 10;

    // bidirectional iterator - the one that map has
    map<string, int>::iterator it1;
    it1 = m.begin();
    cout << (*it1).first << " " << (*it1).second << endl;
    ++it1;
    cout << (*it1).first << " " << (*it1).second << endl;
    it1++;
    cout << (*it1).first << " " << (*it1).second << endl;
    --it1;
    cout << (*it1).first << " " << (*it1).second << endl;

    vector<string> v;

    v.push_back("Cat");
    v.push_back("Dog");
    v.push_back("Monkey");

    cout << "\n-----------\n";

    // random access iterator - the one that vector and string have
    vector<string>::iterator it2;
    it2 = v.begin();
    cout << *it2 << endl;
    ++it2;
    cout << *it2 << endl;
    it2 += 1;
    cout << *it2 << endl;
    it2 -= 2;
    cout << *it2 << endl;
    cout << *(it2 + 3) << endl;

    cout << "\n-----------\n";

    string s;

    s = "Monkey";

    // also random access iterator
    string::iterator it3;
    it3 = s.begin();
    cout << *it3 << endl;
    ++it3;
    cout << *it3 << endl;
    it3 += 1;
    cout << *it3 << endl;
    it3 -= 2;
    cout << *it3 << endl;
    cout << *(it3 + 3) << endl;
    

    return 0;
}