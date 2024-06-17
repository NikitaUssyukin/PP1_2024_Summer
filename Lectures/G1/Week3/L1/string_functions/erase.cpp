#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Monkeys eat bananas";

    s.erase(0, 8);

    cout << "s after s.erase(0, 8) : " << s << endl;

    s.erase(0, 4);

    cout << "s after s.erase(0, 4) : " << s << endl;

    s.erase(0, 7);

    cout << "s after s.erase(0, 7) : " << s << endl;

    cout << "s.empty(): " << s.empty() << endl;


    return 0;
}