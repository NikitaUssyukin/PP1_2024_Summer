#include <iostream>

using namespace std;

void greeting() {
    cout << "Hello" << endl;
    return; // in void functions
    // you can optionally use return keyword without the return value
}

int main() {
    greeting();

    return 0;
}