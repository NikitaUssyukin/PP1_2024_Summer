#include <iostream>
#include <string>

using namespace std;


int main() {
    string s;

    cout << "s.size(): " << s.size() << endl;
    cout << "s.empty(): " << s.empty() << endl;
    cout << "s.capacity(): " << s.capacity() << endl;
    cout << "s.max_size(): " << s.max_size() << endl;

    cin >> s;

    cout << "s.size(): " << s.size() << endl;
    cout << "s.empty(): " << s.empty() << endl;
    cout << "s.capacity(): " << s.capacity() << endl;
    cout << "s.max_size(): " << s.max_size() << endl;

    s.clear();

    cout << "s.size(): " << s.size() << endl;
    cout << "s.empty(): " << s.empty() << endl;
    cout << "s.capacity(): " << s.capacity() << endl;
    cout << "s.max_size(): " << s.max_size() << endl;

    return 0;
}