#include <iostream>
#include <string>

using namespace std;


int main() {
    string s = "The weather is too hot";

    cout << s.substr(4, 7) << endl;
    // weather

    cout << s.substr(4) << endl;
    // weather is too hot

    cout << s.substr() << endl;
    // The weather is too hot

    return 0;
}