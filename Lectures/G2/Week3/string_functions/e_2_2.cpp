#include <iostream>
#include <string>

using namespace std;


int main() {
    string s = "The weather is too hot";

    int pos = 0;

    while(s.find(' ', pos) != string::npos) {
        pos = s.find(' ', pos);
        cout << pos << endl;
        pos += 1;
    }

    return 0;
}