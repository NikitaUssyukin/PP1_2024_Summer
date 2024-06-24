#include <iostream>

using namespace std;

string greetSomeone(string name) {
    return "Hello, " + name + "!";
}

int main() {
    string name;
    cin >> name;
    
    cout << greetSomeone(name) << endl;

    return 0;
}