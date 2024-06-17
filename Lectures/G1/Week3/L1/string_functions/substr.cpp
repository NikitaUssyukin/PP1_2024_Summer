#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Monkeys eat bananas";

    cout << "s.substr(0, 7): " << s.substr(0, 7) << endl;

    cout << "s.substr(8, 3): " << s.substr(8, 3) << endl;

    cout << "s.substr(12, 7): " << s.substr(12, 7) << endl;

    return 0;
}