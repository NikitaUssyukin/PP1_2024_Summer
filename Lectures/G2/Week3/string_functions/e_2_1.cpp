#include <iostream>
#include <string>

using namespace std;


int main() {
    string s = "The weather is too hot";

    int pos = 0;

    int spaceCounter = 0;

    while(s.find(' ', pos) != string::npos) {
        spaceCounter++;
        pos = s.find(' ', pos);
        // cout << pos << endl;
        pos += 1;
    }

    cout << spaceCounter << endl;

    return 0;
}