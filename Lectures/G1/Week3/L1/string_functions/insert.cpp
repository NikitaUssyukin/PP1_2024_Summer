#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Cat";

    s.insert(3, 1, 's');

    cout << s << endl;

    s.insert(4, " catch rats");

    cout << s << endl;

    return 0;
}